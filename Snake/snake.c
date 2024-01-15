#include <curses.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
	WINDOW* win = initscr();
	keypad(win, true);
	nodelay(win, true);
	int posX = 0;
	int posY = 0;
	int foodX = (rand() % 20)*2;
	int foodY = rand() % 20;
	int dirX = 2;
	int dirY = 0;
	while(true){
		int pressed = wgetch(win);
		if (pressed == KEY_LEFT) {
			dirX = -2;
			dirY = 0;
		}
		if (pressed == KEY_RIGHT) {
			dirX = 2;
			dirY = 0;
		}
		if (pressed == KEY_UP) {
			dirX = 0;
			dirY = -1;
		}
		if (pressed == KEY_DOWN) {
			dirX = 0;
			dirY = 1;
		}
		posX += dirX;
		posY += dirY;
		erase();
		mvaddstr(posY,posX,"*");
		mvaddstr(foodY,foodX,"O");
		mvaddstr(20,20,".");
		if (foodX == posX && foodY == posY) {
			foodX = (rand() % 20)*2;
			foodY = rand() % 20;
		}
		usleep(150000);
	}
	endwin();
}
