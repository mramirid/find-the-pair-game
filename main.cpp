#include "game.hpp"

int main() {
	SetConsoleTitle("FIND THE PAIR GAME");

	game obj;

	obj.menu();
	obj.game_play();
	obj.finish();

	return 0;
}