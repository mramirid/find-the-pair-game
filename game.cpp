/*
	implementasi isi dari kelas game
	yang telah didefinisikan di file
	header my_header.h
*/

#include "game.hpp"

void game::menu() {
	char pilihan_menu;

	while (true) {
		// desain menu
		border_menu();
		pembukaan();

		// Label menu
		goto_xy(85, 8);  std::cout << "A. NEW GAME";
		goto_xy(90, 11); std::cout << "OR";
		goto_xy(85, 14); std::cout << "B. EXIT GAME";
		goto_xy(85, 19); std::cout << "Pilih (A/B)? : ";
		std::cin >> pilihan_menu;
		std::cin.ignore();

		if (pilihan_menu == 'A' || pilihan_menu == 'a')
			break;
		else if (pilihan_menu == 'B' || pilihan_menu == 'b')
			exit(0);
		else 
			goto_xy(82, 22); std::cout << "MASUKKAN DENGAN BENAR!";

		Sleep(750);
	}
}

void game::game_play() {
	char abjad1, abjad2;
	int	mark1, mark2;
	bool terbuka[8];
	char locA[4][4];
	int	locB[4][4];

	// Inisialisasi array locA dan locB
	char a = 'a';
	for (auto b = 0; b < 4; ++b)
		for (auto k = 0; k < 4; ++k, ++a) {
			locA[b][k] = a;
			locB[b][k] = 0;
		}

	// Inisialisasi array terbuka
	for (auto i = 0; i < 8; ++i)
		terbuka[i] = false;

	// Baca skor terbaik
	read_file();

	// Generate random numbers
	rand_nums();

	while (true) {
		// desain
		border_game();
		pembukaan();

		goto_xy(73, 4);	 std::cout << "CHECKER";
		goto_xy(100, 4); std::cout << "PROGRESS";

		// Cetak Checker
		display<const char>(70, locA);

		// Cetak Progress
		display<int>(97, locB);

		// Label jumlah gerak
		goto_xy(66, 24); std::cout << "Your steps = " << steps;
		goto_xy(66, 25); std::cout << "Best steps = " << best_steps;

		// Memasukkan Pilihan
		goto_xy(71, 15); std::cout << "Masukkan bagian yang ingin dibandingkan!";
		goto_xy(71, 17); std::cout << "Pilih 2 buah abjad dari CHECKER: ";
		goto_xy(71, 19); std::cout << "Abjad pertama\t: ";
		goto_xy(71, 20); std::cout << "Abjad kedua\t: ";
		goto_xy(90, 19); std::cin >> abjad1;
		std::cin.ignore();
		goto_xy(90, 20); std::cin >> abjad2;
		std::cin.ignore();

		switch (abjad1) {
			case 'a': locB[0][0] = key[0][0]; mark1 = key[0][0]; break;
			case 'b': locB[0][1] = key[0][1]; mark1 = key[0][1]; break;
			case 'c': locB[0][2] = key[0][2]; mark1 = key[0][2]; break;
			case 'd': locB[0][3] = key[0][3]; mark1 = key[0][3]; break;
			case 'e': locB[1][0] = key[1][0]; mark1 = key[1][0]; break;
			case 'f': locB[1][1] = key[1][1]; mark1 = key[1][1]; break;
			case 'g': locB[1][2] = key[1][2]; mark1 = key[1][2]; break;
			case 'h': locB[1][3] = key[1][3]; mark1 = key[1][3]; break;
			case 'i': locB[2][0] = key[2][0]; mark1 = key[2][0]; break;
			case 'j': locB[2][1] = key[2][1]; mark1 = key[2][1]; break;
			case 'k': locB[2][2] = key[2][2]; mark1 = key[2][2]; break;
			case 'l': locB[2][3] = key[2][3]; mark1 = key[2][3]; break;
			case 'm': locB[3][0] = key[3][0]; mark1 = key[3][0]; break;
			case 'n': locB[3][1] = key[3][1]; mark1 = key[3][1]; break;
			case 'o': locB[3][2] = key[3][2]; mark1 = key[3][2]; break;
			case 'p': locB[3][3] = key[3][3]; mark1 = key[3][3]; break;
			default: abjad1 = NULL; break;
		}

		switch (abjad2) {
			case 'a': locB[0][0] = key[0][0]; mark2 = key[0][0]; break;
			case 'b': locB[0][1] = key[0][1]; mark2 = key[0][1]; break;
			case 'c': locB[0][2] = key[0][2]; mark2 = key[0][2]; break;
			case 'd': locB[0][3] = key[0][3]; mark2 = key[0][3]; break;
			case 'e': locB[1][0] = key[1][0]; mark2 = key[1][0]; break;
			case 'f': locB[1][1] = key[1][1]; mark2 = key[1][1]; break;
			case 'g': locB[1][2] = key[1][2]; mark2 = key[1][2]; break;
			case 'h': locB[1][3] = key[1][3]; mark2 = key[1][3]; break;
			case 'i': locB[2][0] = key[2][0]; mark2 = key[2][0]; break;
			case 'j': locB[2][1] = key[2][1]; mark2 = key[2][1]; break;
			case 'k': locB[2][2] = key[2][2]; mark2 = key[2][2]; break;
			case 'l': locB[2][3] = key[2][3]; mark2 = key[2][3]; break;
			case 'm': locB[3][0] = key[3][0]; mark2 = key[3][0]; break;
			case 'n': locB[3][1] = key[3][1]; mark2 = key[3][1]; break;
			case 'o': locB[3][2] = key[3][2]; mark2 = key[3][2]; break;
			case 'p': locB[3][3] = key[3][3]; mark2 = key[3][3]; break;
			default	: abjad2 = NULL; break;
		}

		// Menampilkan perubahan dari progress (yang terpilih)
		display<int>(97, locB);

		// Cek apakah sudah benar semua?
		if (locB[0][0] > 0 && locB[0][1] > 0 && locB[0][2] > 0 && locB[0][3] > 0 &&
			locB[1][0] > 0 && locB[1][1] > 0 && locB[1][2] > 0 && locB[1][3] > 0 &&
			locB[2][0] > 0 && locB[2][1] > 0 && locB[2][2] > 0 && locB[2][3] > 0 &&
			locB[3][0] > 0 && locB[3][1] > 0 && locB[3][2] > 0 && locB[3][3] > 0) {
			++steps;
			break;
		}
		// Jika masih berlum terbuka semua
		else {
			// jika user memasukkan kedua abjad > 'p'
			if (abjad1 == NULL && abjad2 == NULL) {
				goto_xy(71, 22);
				std::cout << "Maaf, pilihan pertama & kedua kamu SALAH";
			}
			// jika salah satu masukan SALAH (abjad1)
			else if (abjad1 == NULL) {
				goto_xy(71, 22);
				std::cout << "Maaf, pilihan pertama kamu SALAH";

				for (auto a = 0; a < 4; ++a)
					for (auto b = 0; b < 4; ++b)
						if (locB[a][b] == mark2 && abjad2 <= 'p')
							locB[a][b] = 0;
			}
			// jika salah satu masukan SALAH (abjad2)
			else if (abjad2 == NULL) {
				goto_xy(71, 22);
				std::cout << "Maaf, pilihan kedua kamu SALAH";

				for (auto a = 0; a < 4; ++a)
					for (auto b = 0; b < 4; ++b)
						if (locB[a][b] == mark1 && abjad1 <= 'p')
							locB[a][b] = 0;
			}
			// jika tidak sama dan masih tertutup kedua-duanya
			else if (mark1 != mark2 && (terbuka[mark1 - 1] == false && terbuka[mark2 - 1] == false)) {
				goto_xy(71, 22);
				std::cout << "Coba lagi :)";

				for (auto a = 0; a < 4; ++a)
					for (auto b = 0; b < 4; ++b)
						if (locB[a][b] == mark1 || locB[a][b] == mark2)
							locB[a][b] = 0;
			}
			// jika tidak sama dan salah satu sudah terbuka (mark1)
			else if (mark1 != mark2 && (terbuka[mark1 - 1] == true && terbuka[mark2 - 1] == false)) {
				goto_xy(71, 22);
				std::cout << "Kartu pertama sudah terbuka!";

				for (auto a = 0; a < 4; ++a)
					for (auto b = 0; b < 4; ++b)
						if (locB[a][b] == mark2)
							locB[a][b] = 0;
			}
			// jika tidak sama dan salah satu sudah terbuka (mark2)
			else if (mark1 != mark2 && (terbuka[mark1 - 1] == false && terbuka[mark2 - 1] == true)) {
				goto_xy(71, 22);
				std::cout << "Kartu kedua sudah terbuka!";

				for (auto a = 0; a < 4; ++a)
					for (auto b = 0; b < 4; ++b)
						if (locB[a][b] == mark1)
							locB[a][b] = 0;
			}
			// jika tidak sama dan kedua-duanya sudah terbuka
			else if (mark1 != mark2 && (terbuka[mark1 - 1] == true && terbuka[mark2 - 1] == true)) {
				goto_xy(71, 22);
				std::cout << "Anda memilih kartu yang sudah terbuka!";
			}
			// jika sama dan kedua-duanya sudah terbuka
			else if (mark1 == mark2 && (terbuka[mark1 - 1] == true && terbuka[mark2 - 1] == true)) {
				goto_xy(71, 22);
				std::cout << "Anda memilih kartu yang sudah terbuka!";
			}
			// Jika user memilih abjad yang sama
			else if (abjad1 == abjad2 && mark1 == mark2) {
				goto_xy(71, 22);
				std::cout << "Anda memilih abjad yang sama!";

				for (auto a = 0; a < 4; ++a)
					for (auto b = 0; b < 4; ++b)
						if (locB[a][b] == mark1)
							locB[a][b] = 0;
			}
			// jika sama dan kedua-duanya masih tertutup (benar)
			else {
				goto_xy(71, 22);
				std::cout << "BENAR :)";

				terbuka[mark1 - 1] = true;
				terbuka[mark2 - 1] = true;

			}
		}

		goto_xy(91, 20);
		++steps;
		Sleep(3000);
	}
}

void game::finish() {
	write_file();	// tulis skor (jika ada perubahan)
	read_file();	// baca lagi untuk pembaharuan best_steps (jika ada)
	
	win();
	goto_xy(83, 13); std::cout << "Your steps = " << steps;
	goto_xy(83, 14); std::cout << "Best steps = " << best_steps;

	goto_xy(74, 17);
	system("PAUSE");
}

void game::rand_nums() {
	/*	Fungsi untuk menghasilkan angka random interval 1-8
	sebanyak 16 buah dan ada 2 pasang angka yang bakal kembar */

	srand((unsigned int)time(0));		// Pasang seed
	int catat[16], posisi = 0;
	int acak, count;
	bool sama;

	// Selama array catat masih belum penuh
	while (posisi < 16) {
		sama = false;
		count = 1;
		acak = (rand() % 8) + 1;

		// Memastikan seharusnya angka[posisi] hanya sepasang yang kembar !(>2)
		for (auto i = 0; i <= posisi; ++i)
			if (posisi == 0)	// karena masih berisi 1 tidak ada yang dibandingkan
				break;
			else {	// cek apakah yang kembar sudah > 2
				if (count <= 2) {
					if (acak == catat[i])
						++count;
				}
				else {
					--posisi;
					sama = true;
					break;
				}
			}

			if (sama == false)
				catat[posisi] = acak;

			++posisi;
	}

	// Ubah ke format 2D array
	--posisi;

	for (auto b = 0; b < 4; ++b)
		for (auto k = 0; k < 4; ++k, --posisi)
			key[b][k] = catat[posisi];
}

void game::read_file() {
	/*	Fungsi untuk membaca skor dari dalam file */
	std::ifstream read;

	read.open((char*)"steps.txt");
	read >> best_steps;

	read.close();
}

void game::write_file() {
	/*	Fungsi untuk menulis skor ke dalam file */
	std::ofstream write;

	if (steps < best_steps && steps >= 8) {
		// Buka file yang akan ditulis
		write.open((char*)"steps.txt");
		write << steps;
	}

	write.close();
}

template <class T>
void game::display(int position, T array_name[4][4]) {
	for (auto b = 0; b < 4; ++b)
		for (auto k = 0; k < 4; ++k) {
			if (k == 0) {
				goto_xy(position + k + 1, 6 + b);
				std::cout << '[' << array_name[b][k] << ']';
			}
			else if (k == 1) {
				goto_xy(position + k + 3, 6 + b);
				std::cout << '[' << array_name[b][k] << ']';
			}
			else if (k == 2) {
				goto_xy(position + k + 5, 6 + b);
				std::cout << '[' << array_name[b][k] << ']';
			}
			else if (k == 3) {
				goto_xy(position + k + 7, 6 + b);
				std::cout << '[' << array_name[b][k] << ']';
			}
		}
}