/*
	File header design.h berisi
	deklarasi dari kelas design
*/

#pragma once

#include <Windows.h>
#include <iostream>

// class design untuk desain game
class design {
	const char $1 = 219;
	const char $2 = 254;
protected:
	void goto_xy(int x, int y);
	void border_menu();
	void border_game();
	void pembukaan();
	void win();
};

