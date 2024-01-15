#include <sys/socket.h>
#include <string.h>
#include <fcntl.h>
#include <sys/sendfile.h>
#include <unistd.h>
#include <netinet/in.h>

// Based on the video 'Making Minimalist Web Server in C on Linux' from Nir Lichtman
// https://www.youtube.com/watch?v=2HrYIl6GpYg&list=WL&index=28&ab_channel=NirLichtman

void main() {
	int s = socket(AF_INET, SOCK_STREAM,0); // This is IPv4 with a simple TCP socket
	struct sockaddr_in addr = {
		AF_INET,
		0x901f,
		0
	}; //0x901f is indeed the hex(8080)='0x1f90' inverted, i.e., in opposite order (portnumber)

	bind(s, &addr, sizeof(addr));  // The '&' in 'addr' is to pass the pointer of the structure

	listen(s, 10); // This int tells us how many connections will be waiting before getting rejected

	int client_fd = accept(s, 0, 0); // This returns the file descriptor of the client socket
	
	char buffer[256] = {0};
	
	recv(client_fd, buffer, 256, 0); // This is the string the client is sending
	
	char* f = buffer + 5;
	
	*strchr(f, ' ') = 0;// A typic html request starts with 'GET /file.html ...', so we are skipping 5 chrs.
	
	int opened_fd = open(f, O_RDONLY);
	
	sendfile(client_fd, opened_fd, 0, 256);
	
	close(opened_fd);
	
	close(client_fd);
	
	close(s);
}
