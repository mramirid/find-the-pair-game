/*
	implementasi isi dari kelas design
	yang telah didefinisikan di file
	header my_header.h
*/


#include "design.hpp"

void design::goto_xy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void design::border_menu() {
	system("CLS");

	// KIRI, KANAN & TENGAH
	for (auto y = 1; y < 25; ++y) {
		goto_xy(2, 2 + y);
		std::cout << $1;
		goto_xy(3, 2 + y);
		std::cout << $1;

		goto_xy(117, 2 + y);
		std::cout << $1;
		goto_xy(116, 2 + y);
		std::cout << $1;

		goto_xy(63, 2 + y);
		std::cout << $1;
		goto_xy(62, 2 + y);
		std::cout << $1;
	}

	// ATAS & BAWAH
	for (auto x = 0; x < 116; ++x) {
		goto_xy(2 + x, 2);
		std::cout << $1;

		goto_xy(2 + x, 27);
		std::cout << $1;
	}
}

void design::border_game() {
	system("CLS");

	// ATAS & BAWAH
	for (auto x = 0; x < 116; ++x) {
		goto_xy(2 + x, 2);
		std::cout << $1;

		goto_xy(2 + x, 27);
		std::cout << $1;
	}

	// KIRI, KANAN & TENGAH
	for (auto y = 1; y < 25; ++y) {
		goto_xy(2, 2 + y);
		std::cout << $1;
		goto_xy(3, 2 + y);
		std::cout << $1;

		goto_xy(117, 2 + y);
		std::cout << $1;
		goto_xy(116, 2 + y);
		std::cout << $1;

		goto_xy(63, 2 + y);
		std::cout << $1;
		goto_xy(62, 2 + y);
		std::cout << $1;
	}

	// GARIS VERTIKAL DAERAH KANAN
	for (auto y = 1; y < 10; ++y) {
		goto_xy(90, 2 + y);
		std::cout << $1;
		goto_xy(91, 2 + y);
		std::cout << $1;
	}

	// GARIS HORIZONTAL DAERAH KANAN
	for (auto x = 0; x < 53; ++x) {
		goto_xy(64 + x, 12);
		std::cout << $1;
	}
}

void design::pembukaan() {
	goto_xy(20, 5);  printf("%c%c%c%c%c  %c  %c%c    %c  %c%c%c%c  ", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 6);  printf("%c      %c  %c %c   %c  %c   %c ", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 7);  printf("%c%c%c%c%c  %c  %c  %c  %c  %c    %c", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 8);  printf("%c      %c  %c   %c %c  %c   %c ", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 9);  printf("%c      %c  %c    %c%c  %c%c%c%c  ", $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 10); printf("                         ");
	goto_xy(20, 11); printf("  %c%c%c%c%c  %c   %c  %c%c%c%c%c    ", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 12); printf("    %c    %c   %c  %c        ", $2, $2, $2, $2);
	goto_xy(20, 13); printf("    %c    %c%c%c%c%c  %c%c%c%c%c    ", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 14); printf("    %c    %c   %c  %c        ", $2, $2, $2, $2);
	goto_xy(20, 15); printf("    %c    %c   %c  %c%c%c%c%c    ", $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 16); printf("                         ");
	goto_xy(20, 17); printf(" %c%c%c    %c%c%c%c%c%c  %c  %c%c%c   ", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 18); printf(" %c  %c   %c    %c  %c  %c  %c  ", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 19); printf(" %c   %c  %c    %c  %c  %c   %c ", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 20); printf(" %c  %c   %c%c%c%c%c%c  %c  %c  %c  ", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 21); printf(" %c%c%c    %c    %c  %c  %c%c%c   ", $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(20, 22); printf(" %c      %c    %c  %c  %c  %c  ", $2, $2, $2, $2, $2, $2);
	goto_xy(20, 23); printf(" %c      %c    %c  %c  %c   %c ", $2, $2, $2, $2, $2, $2);
}

void design::win() {
	border_menu();
	goto_xy(21, 8);  printf("%c   %c  %c%c%c%c%c%c  %c     %c", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(21, 9);  printf(" %c %c   %c    %c  %c     %c", $2, $2, $2, $2, $2, $2);
	goto_xy(21, 10); printf("  %c    %c    %c  %c     %c", $2, $2, $2, $2, $2);
	goto_xy(21, 11); printf("  %c    %c    %c  %c     %c", $2, $2, $2, $2, $2);
	goto_xy(21, 12); printf("  %c    %c    %c  %c     %c", $2, $2, $2, $2, $2);
	goto_xy(21, 13); printf("  %c    %c%c%c%c%c%c  %c%c%c%c%c%c%c", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
	goto_xy(21, 14); printf("                      ");
	goto_xy(21, 15); printf("%c   %c   %c  %c  %c%c     %c", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(21, 16); printf("%c   %c   %c  %c  %c %c    %c", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(21, 17); printf("%c   %c   %c  %c  %c  %c   %c", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(21, 18); printf("%c   %c   %c  %c  %c   %c  %c", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(21, 19); printf("%c   %c   %c  %c  %c    %c %c", $2, $2, $2, $2, $2, $2, $2);
	goto_xy(21, 20); printf("%c%c%c%c%c%c%c%c%c  %c  %c     %c%c", $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2, $2);
}