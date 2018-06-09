/*
 * Nama : Amir Muhammad Hakim  
 * NPM  : 17081010051 
 */

// Microsoft C/C++ Compiler

#include <iostream>
#include <Windows.h>
#include <ctime>

// Kelas untuk objek kartu
class card {
public:
    char value;
    card *next;
};

// Single Linked List
class list {
    card *head, *tail;
public:
    list() {
        head = nullptr;
        tail = nullptr;
    }

    void create_card(char value) {
        card *temp = new card;
        temp->value = value;
        temp->next = nullptr;

        if (head == nullptr) {
            head = temp;
            tail = temp;
            temp = nullptr;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    void replace_card(int pos, char value) {
        card *cur = new card;
        cur = head;

        for (auto i = 1; i < pos; ++i)
            cur = cur->next;

        cur->value = value;
    }

    bool check_cards() {
        card *cur = new card;
        cur = head;

        while (cur != nullptr) {
            if (cur->value == '*')
                return false;
            else
                cur = cur->next;
        }

        return true;
    }

    void display_cards() {
        card *cur = new card;
        cur = head;
        int counter = 1;

        while (cur != nullptr) {
            std::cout << '[' << cur->value << ']';

            if (counter == 4 || counter == 8 || counter == 12 || counter == 16)
                std::cout << '\n';

            cur = cur->next;
            ++counter;
        }
    }
};

class game {
    // Objek pertama: selektor, kedua: progress
    list cards[2];
    char abjad1, abjad2;
    int random_numbers[16];
    int mark1, mark2;
    bool terbuka[16];
public:
    game() {
        SetConsoleTitle(reinterpret_cast<LPCSTR>("FIND THE PAIR GAME"));

        rand_nums();

        char huruf = 'a';
        for (auto i = 0; i < 16; ++i, ++huruf) {
            cards[0].create_card(huruf);
            cards[1].create_card('*');
            terbuka[i] = false;
        }
    }

    void game_play() {
        while (true) {
            system("CLS");

            std::cout << "+ PROGRESS +\n" << std::endl;
            cards[1].display_cards();
            std::cout << "\n\n+ SELEKTOR +\n" << std::endl;
            cards[0].display_cards();
            std::cout << "\n\n>>> Pilih 2 kartu yang ingin dibandingkan!" << std::endl;
            std::cout << ">>> Kartu pertama : ";
            std::cin >> abjad1;
            std::cout << ">>> Kartu kedua   : ";
            std::cin >> abjad2;

            switch (abjad1) {
                case 'a': cards[1].replace_card(1, random_numbers[0] + '0');    mark1 = 1;  break;
                case 'b': cards[1].replace_card(2, random_numbers[1] + '0');    mark1 = 2;  break;
                case 'c': cards[1].replace_card(3, random_numbers[2] + '0');    mark1 = 3;  break;
                case 'd': cards[1].replace_card(4, random_numbers[3] + '0');    mark1 = 4;  break;
                case 'e': cards[1].replace_card(5, random_numbers[4] + '0');    mark1 = 5;  break;
                case 'f': cards[1].replace_card(6, random_numbers[5] + '0');    mark1 = 6;  break;
                case 'g': cards[1].replace_card(7, random_numbers[6] + '0');    mark1 = 7;  break;
                case 'h': cards[1].replace_card(8, random_numbers[7] + '0');    mark1 = 8;  break;
                case 'i': cards[1].replace_card(9, random_numbers[8] + '0');    mark1 = 9;  break;
                case 'j': cards[1].replace_card(10, random_numbers[9] + '0');   mark1 = 10; break;
                case 'k': cards[1].replace_card(11, random_numbers[10] + '0');  mark1 = 11; break;
                case 'l': cards[1].replace_card(12, random_numbers[11] + '0');  mark1 = 12; break;
                case 'm': cards[1].replace_card(13, random_numbers[12] + '0');  mark1 = 13; break;
                case 'n': cards[1].replace_card(14, random_numbers[13] + '0');  mark1 = 14; break;
                case 'o': cards[1].replace_card(15, random_numbers[14] + '0');  mark1 = 15; break;
                case 'p': cards[1].replace_card(16, random_numbers[15] + '0');  mark1 = 16; break;
                default : abjad1 = '\0'; break;
            }

            switch (abjad2) {
                case 'a': cards[1].replace_card(1, random_numbers[0] + '0');    mark2 = 1;  break;
                case 'b': cards[1].replace_card(2, random_numbers[1] + '0');    mark2 = 2;  break;
                case 'c': cards[1].replace_card(3, random_numbers[2] + '0');    mark2 = 3;  break;
                case 'd': cards[1].replace_card(4, random_numbers[3] + '0');    mark2 = 4;  break;
                case 'e': cards[1].replace_card(5, random_numbers[4] + '0');    mark2 = 5;  break;
                case 'f': cards[1].replace_card(6, random_numbers[5] + '0');    mark2 = 6;  break;
                case 'g': cards[1].replace_card(7, random_numbers[6] + '0');    mark2 = 7;  break;
                case 'h': cards[1].replace_card(8, random_numbers[7] + '0');    mark2 = 8;  break;
                case 'i': cards[1].replace_card(9, random_numbers[8] + '0');    mark2 = 9;  break;
                case 'j': cards[1].replace_card(10, random_numbers[9] + '0');   mark2 = 10; break;
                case 'k': cards[1].replace_card(11, random_numbers[10] + '0');  mark2 = 11; break;
                case 'l': cards[1].replace_card(12, random_numbers[11] + '0');  mark2 = 12; break;
                case 'm': cards[1].replace_card(13, random_numbers[12] + '0');  mark2 = 13; break;
                case 'n': cards[1].replace_card(14, random_numbers[13] + '0');  mark2 = 14; break;
                case 'o': cards[1].replace_card(15, random_numbers[14] + '0');  mark2 = 15; break;
                case 'p': cards[1].replace_card(16, random_numbers[15] + '0');  mark2 = 16; break;
                default : abjad2 = '\0'; break;
            }

            std::cout << "\n>>> Mengecek kartu...\n\n";
            cards[1].display_cards();

            if (cards[1].check_cards()) {
                std::cout << "\n>>> Menang!\n" << std::endl;
                Sleep(5000);
                system("PAUSE");
                break;
            }
            else {
                // Jika salah satu/kedua pilihan salah
                if (abjad1 == '\0' || abjad2 == '\0') {
                    // Jika pilihan pertama salah & kartu kedua sudah terbuka
                    if ((abjad1 == '\0' && abjad2 != '\0') && terbuka[mark2 - 1] == true)
                        std::cout << "\n>>> Pilihan pertama salah & kartu kedua sudah terbuka!";
                    // Jika pilihan kedua salah & kartu pertama sudah terbuka
                    else if ((abjad1 != '\0' && abjad2 == '\0') && terbuka[mark1 - 1] == true)
                        std::cout << "\n>>> Pilihan kedua salah & kartu pertama sudah terbuka!";
                    else
                        std::cout << "\n>>> Pilihan pertama dan kedua salah!";
                }
                // Jika kedua pilihan benar tapi membuka kartu yang sudah terbuka (salah satu/kedua2nya)
                else if ((random_numbers[mark1 - 1] != random_numbers[mark2 - 1]) && mark1 != mark2 && terbuka[mark1 - 1] == true || terbuka[mark2 - 1] == true) {
                    if (terbuka[mark1 - 1] == false && terbuka[mark2 - 1] == true) {
                        std::cout << "\n>>> Kartu kedua sudah terbuka!";
                        cards[1].replace_card(mark1, '*');
                    }
                    else if (terbuka[mark2 - 1] == false && terbuka[mark1 - 1] == true) {
                        std::cout << "\n>>> Kartu pertama sudah terbuka!";
                        cards[1].replace_card(mark2, '*');
                    }
                    else
                        std::cout << "\n>>> Anda memilih kartu yang sama dan sudah terbuka!";
                }
                // Jika bernilai sama dan kedua2nya belum terbuka
                else if ((random_numbers[mark1 - 1] == random_numbers[mark2 - 1]) && (terbuka[mark1 - 1] == false && terbuka[mark2 - 1] == false) && mark1 != mark2) {
                    std::cout << "\n>>> BENAR :)";
                    terbuka[mark1 - 1] = true;
                    terbuka[mark2 - 1] = true;
                }
                // Jika bernilai sama dan kedua2nya telah terbuka
                else if ((random_numbers[mark1 - 1] == random_numbers[mark2 - 1]) && (terbuka[mark1 - 1] == true && terbuka[mark2 - 1] == true) && mark1 != mark2)
                    std::cout << "\n>>> Anda memilih kartu yang sudah terbuka!";
                // Jika bernilai sama dan hanya memilih ke satu kartu
                else if ((random_numbers[mark1 - 1] == random_numbers[mark2 - 1]) && mark1 == mark2) {
                    std::cout << "\n>>> Anda memilih kartu yang sama!";

                    if (terbuka[mark1 - 1] == false)
                        cards[1].replace_card(mark1, '*');
                }
                else {
                    std::cout << "\n>>> Coba lagi :)";

                    cards[1].replace_card(mark1, '*');
                    cards[1].replace_card(mark2, '*');
                }
                    
            }

            Sleep(3000);
        }
    }

private:
    void rand_nums() {
        srand((unsigned int)time(0));
        int acak, count, posisi = 0;
        bool sama;

        // Selama array random_numbers masih belum penuh
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
                        if (acak == random_numbers[i])
                            ++count;
                    }
                    else {
                        --posisi;
                        sama = true;
                        break;
                    }
                }

                if (sama == false)
                    random_numbers[posisi] = acak;

                ++posisi;
        }
    }
};

int main(int argc, char const *argv[]) {
    game obj;

    obj.game_play();

    return 0;
}
