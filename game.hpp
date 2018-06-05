/*
	File header game.h berisi
	deklarasi dari kelas game
*/

#pragma once

#include "design.hpp"
#include <ctime>
#include <fstream>

// class game untuk alur permainan
class game : private design {
	int steps = 0;
	int best_steps = 0;
	int key[4][4];
public:
	void menu();
	void game_play();
	void finish();
private:
	void rand_nums();
	void read_file();
	void write_file();
	template <class T> void display(int position, T array_name[4][4]);
};