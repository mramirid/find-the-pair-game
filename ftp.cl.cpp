/*
 * Nama : Amir Muhammad Hakim  
 * NPM  : 17081010051 
 */

// Microsoft C/C++ Compiler

#include <iostream>
#include <Windows.h>
#include <ctime>

namespace features
{
  const char $ = 254;

  void goto_xy(int x, int y)
  {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
  }

  int *rand_nums()
  {
    /* Generate random numbers */

    srand((unsigned int)time(0));
    int *random_numbers;
    int acak, count, posisi = 0;
    bool sama;

    // Alokasi memory (harus didealokasi kemudian!)
    random_numbers = new int[16];

    // Selama array random_numbers masih belum penuh
    while (posisi < 16)
    {
      sama = false;
      count = 1;
      acak = (rand() % 8) + 1;

      // Memastikan seharusnya angka[posisi] hanya sepasang yang kembar !(>2)
      for (auto i = 0; i <= posisi; ++i)
        if (posisi == 0) // karena masih berisi 1 tidak ada yang dibandingkan
          break;
        else
        { // cek apakah yang kembar sudah > 2
          if (count <= 2)
          {
            if (acak == random_numbers[i])
              ++count;
          }
          else
          {
            --posisi;
            sama = true;
            break;
          }
        }

      if (sama == false)
        random_numbers[posisi] = acak;

      ++posisi;
    }

    return random_numbers;
  }

  void tulisan_FTP()
  {
    goto_xy(20, 5);
    printf("%c%c%c%c%c  %c  %c%c    %c  %c%c%c%c  ", $, $, $, $, $, $, $, $, $, $, $, $, $);
    goto_xy(20, 6);
    printf("%c      %c  %c %c   %c  %c   %c ", $, $, $, $, $, $, $);
    goto_xy(20, 7);
    printf("%c%c%c%c%c  %c  %c  %c  %c  %c    %c", $, $, $, $, $, $, $, $, $, $, $);
    goto_xy(20, 8);
    printf("%c      %c  %c   %c %c  %c   %c ", $, $, $, $, $, $, $);
    goto_xy(20, 9);
    printf("%c      %c  %c    %c%c  %c%c%c%c  ", $, $, $, $, $, $, $, $, $);
    goto_xy(20, 10);
    printf("                         ");
    goto_xy(20, 11);
    printf("  %c%c%c%c%c  %c   %c  %c%c%c%c%c    ", $, $, $, $, $, $, $, $, $, $, $, $);
    goto_xy(20, 12);
    printf("    %c    %c   %c  %c        ", $, $, $, $);
    goto_xy(20, 13);
    printf("    %c    %c%c%c%c%c  %c%c%c%c%c    ", $, $, $, $, $, $, $, $, $, $, $);
    goto_xy(20, 14);
    printf("    %c    %c   %c  %c        ", $, $, $, $);
    goto_xy(20, 15);
    printf("    %c    %c   %c  %c%c%c%c%c    ", $, $, $, $, $, $, $, $);
    goto_xy(20, 16);
    printf("                         ");
    goto_xy(20, 17);
    printf(" %c%c%c    %c%c%c%c%c%c  %c  %c%c%c   ", $, $, $, $, $, $, $, $, $, $, $, $, $);
    goto_xy(20, 18);
    printf(" %c  %c   %c    %c  %c  %c  %c  ", $, $, $, $, $, $, $);
    goto_xy(20, 19);
    printf(" %c   %c  %c    %c  %c  %c   %c ", $, $, $, $, $, $, $);
    goto_xy(20, 20);
    printf(" %c  %c   %c%c%c%c%c%c  %c  %c  %c  ", $, $, $, $, $, $, $, $, $, $, $);
    goto_xy(20, 21);
    printf(" %c%c%c    %c    %c  %c  %c%c%c   ", $, $, $, $, $, $, $, $, $);
    goto_xy(20, 22);
    printf(" %c      %c    %c  %c  %c  %c  ", $, $, $, $, $, $);
    goto_xy(20, 23);
    printf(" %c      %c    %c  %c  %c   %c ", $, $, $, $, $, $);
  }

  void tulisan_menang()
  {
    goto_xy(21, 8);
    printf("%c   %c  %c%c%c%c%c%c  %c     %c", $, $, $, $, $, $, $, $, $, $);
    goto_xy(21, 9);
    printf(" %c %c   %c    %c  %c     %c", $, $, $, $, $, $);
    goto_xy(21, 10);
    printf("  %c    %c    %c  %c     %c", $, $, $, $, $);
    goto_xy(21, 11);
    printf("  %c    %c    %c  %c     %c", $, $, $, $, $);
    goto_xy(21, 12);
    printf("  %c    %c    %c  %c     %c", $, $, $, $, $);
    goto_xy(21, 13);
    printf("  %c    %c%c%c%c%c%c  %c%c%c%c%c%c%c", $, $, $, $, $, $, $, $, $, $, $, $, $, $);
    goto_xy(21, 14);
    printf("                      ");
    goto_xy(21, 15);
    printf("%c   %c   %c  %c  %c%c     %c", $, $, $, $, $, $, $);
    goto_xy(21, 16);
    printf("%c   %c   %c  %c  %c %c    %c", $, $, $, $, $, $, $);
    goto_xy(21, 17);
    printf("%c   %c   %c  %c  %c  %c   %c", $, $, $, $, $, $, $);
    goto_xy(21, 18);
    printf("%c   %c   %c  %c  %c   %c  %c", $, $, $, $, $, $, $);
    goto_xy(21, 19);
    printf("%c   %c   %c  %c  %c    %c %c", $, $, $, $, $, $, $);
    goto_xy(21, 20);
    printf("%c%c%c%c%c%c%c%c%c  %c  %c     %c%c", $, $, $, $, $, $, $, $, $, $, $, $, $);
  }
}

// Kelas untuk objek kartu
class card
{
public:
  char value;
  card *next;
};

// Single Linked List
class list
{
  card *head, *tail;

public:
  list()
  {
    head = nullptr;
    tail = nullptr;
  }

  void create_card(char value)
  {
    card *temp = new card;
    temp->value = value;
    temp->next = nullptr;

    if (head == nullptr)
    {
      head = temp;
      tail = temp;
      temp = nullptr;
    }
    else
    {
      tail->next = temp;
      tail = temp;
    }
  }

  void replace_card(int pos, char value)
  {
    card *cur = new card;
    cur = head;

    for (auto i = 1; i < pos; ++i)
      cur = cur->next;

    cur->value = value;
  }

  bool check_cards()
  {
    card *cur = new card;
    cur = head;

    while (cur != nullptr)
    {
      if (cur->value == '*')
        return false;
      else
        cur = cur->next;
    }

    return true;
  }

  void display_cards(int x, int y)
  {
    card *cur = new card;
    cur = head;
    int counter = 0;

    while (cur != nullptr)
    {
      if (counter == 1 || counter == 2 || counter == 3)
        x += 3; // Agar tidak menimbun

      features::goto_xy(x, y);
      std::cout << '[' << cur->value << ']';

      if (counter == 3)
      {
        ++y;    // ENTER
        x -= 9; // Set awal nilai x
        counter = -1;
      }

      cur = cur->next;
      ++counter;
    }
  }
};

// Kelas border untuk objek border
class border
{
  const char block = 219;

public:
  void border_menu()
  {
    // KIRI, KANAN & TENGAH
    for (auto y = 1; y < 25; ++y)
    {
      features::goto_xy(2, 2 + y);
      std::cout << block;
      features::goto_xy(3, 2 + y);
      std::cout << block;

      features::goto_xy(117, 2 + y);
      std::cout << block;
      features::goto_xy(116, 2 + y);
      std::cout << block;

      features::goto_xy(63, 2 + y);
      std::cout << block;
      features::goto_xy(62, 2 + y);
      std::cout << block;
    }

    // ATAS & BAWAH
    for (auto x = 0; x < 116; ++x)
    {
      features::goto_xy(2 + x, 2);
      std::cout << block;

      features::goto_xy(2 + x, 27);
      std::cout << block;
    }
  }

  void border_game()
  {
    // ATAS & BAWAH
    for (auto x = 0; x < 116; ++x)
    {
      features::goto_xy(2 + x, 2);
      std::cout << block;

      features::goto_xy(2 + x, 27);
      std::cout << block;
    }

    // KIRI, KANAN & TENGAH
    for (auto y = 1; y < 25; ++y)
    {
      features::goto_xy(2, 2 + y);
      std::cout << block;
      features::goto_xy(3, 2 + y);
      std::cout << block;

      features::goto_xy(117, 2 + y);
      std::cout << block;
      features::goto_xy(116, 2 + y);
      std::cout << block;

      features::goto_xy(63, 2 + y);
      std::cout << block;
      features::goto_xy(62, 2 + y);
      std::cout << block;
    }

    // GARIS VERTIKAL DAERAH KANAN
    for (auto y = 1; y < 10; ++y)
    {
      features::goto_xy(90, 2 + y);
      std::cout << block;
      features::goto_xy(91, 2 + y);
      std::cout << block;
    }

    // GARIS HORIZONTAL DAERAH KANAN
    for (auto x = 0; x < 53; ++x)
    {
      features::goto_xy(64 + x, 12);
      std::cout << block;
    }
  }
};

class game
{
  list cards[2]; // Objek pertama: selektor, kedua: progress
  border _border;
  int *random_numbers;
  char abjad1, abjad2;
  int mark1, mark2;
  bool terbuka[16];

public:
  game()
  {
    random_numbers = features::rand_nums();

    char huruf = 'a';
    for (auto i = 0; i < 16; ++i, ++huruf)
    {
      cards[0].create_card(huruf);
      cards[1].create_card('*');
      terbuka[i] = false;
    }
  }

  void menu()
  {
    char pilihan_menu;

    while (true)
    {
      system("CLS");
      _border.border_menu();
      features::tulisan_FTP();

      // Label menu
      features::goto_xy(85, 8);
      std::cout << "A. NEW GAME";
      features::goto_xy(90, 11);
      std::cout << "OR";
      features::goto_xy(85, 14);
      std::cout << "B. EXIT GAME";
      features::goto_xy(85, 19);
      std::cout << "Pilih (A/B)? : ";
      std::cin >> pilihan_menu;
      std::cin.ignore();

      if (pilihan_menu == 'A' || pilihan_menu == 'a')
        break;
      else if (pilihan_menu == 'B' || pilihan_menu == 'b')
        exit(0);
      else
        features::goto_xy(82, 22);
      std::cout << "MASUKKAN DENGAN BENAR!";

      Sleep(750);
    }
  }

  void game_play()
  {
    while (true)
    {
      system("CLS");
      _border.border_game();
      features::tulisan_FTP();

      // Label Selektor dan Progress
      features::goto_xy(73, 4);
      std::cout << "SELEKTOR";
      cards[0].display_cards(71, 6);
      features::goto_xy(100, 4);
      std::cout << "PROGRESS";
      cards[1].display_cards(98, 6);

      // Label keterangan
      features::goto_xy(71, 23);
      std::cout << "Keterangan: ";

      // Label Pilihan dan input user
      features::goto_xy(71, 16);
      std::cout << "Pilih 2 kartu yang ingin dibandingkan!";
      features::goto_xy(71, 18);
      std::cout << "Pilih 2 buah abjad dari SELEKTOR: ";
      features::goto_xy(71, 20);
      std::cout << "Abjad pertama\t: ";
      features::goto_xy(71, 21);
      std::cout << "Abjad kedua\t: ";
      features::goto_xy(90, 20);
      std::cin >> abjad1;
      std::cin.ignore();
      features::goto_xy(90, 21);
      std::cin >> abjad2;
      std::cin.ignore();

      switch (abjad1)
      {
      case 'a':
        cards[1].replace_card(1, random_numbers[0] + '0');
        mark1 = 1;
        break;
      case 'b':
        cards[1].replace_card(2, random_numbers[1] + '0');
        mark1 = 2;
        break;
      case 'c':
        cards[1].replace_card(3, random_numbers[2] + '0');
        mark1 = 3;
        break;
      case 'd':
        cards[1].replace_card(4, random_numbers[3] + '0');
        mark1 = 4;
        break;
      case 'e':
        cards[1].replace_card(5, random_numbers[4] + '0');
        mark1 = 5;
        break;
      case 'f':
        cards[1].replace_card(6, random_numbers[5] + '0');
        mark1 = 6;
        break;
      case 'g':
        cards[1].replace_card(7, random_numbers[6] + '0');
        mark1 = 7;
        break;
      case 'h':
        cards[1].replace_card(8, random_numbers[7] + '0');
        mark1 = 8;
        break;
      case 'i':
        cards[1].replace_card(9, random_numbers[8] + '0');
        mark1 = 9;
        break;
      case 'j':
        cards[1].replace_card(10, random_numbers[9] + '0');
        mark1 = 10;
        break;
      case 'k':
        cards[1].replace_card(11, random_numbers[10] + '0');
        mark1 = 11;
        break;
      case 'l':
        cards[1].replace_card(12, random_numbers[11] + '0');
        mark1 = 12;
        break;
      case 'm':
        cards[1].replace_card(13, random_numbers[12] + '0');
        mark1 = 13;
        break;
      case 'n':
        cards[1].replace_card(14, random_numbers[13] + '0');
        mark1 = 14;
        break;
      case 'o':
        cards[1].replace_card(15, random_numbers[14] + '0');
        mark1 = 15;
        break;
      case 'p':
        cards[1].replace_card(16, random_numbers[15] + '0');
        mark1 = 16;
        break;
      default:
        abjad1 = '\0';
        break;
      }

      switch (abjad2)
      {
      case 'a':
        cards[1].replace_card(1, random_numbers[0] + '0');
        mark2 = 1;
        break;
      case 'b':
        cards[1].replace_card(2, random_numbers[1] + '0');
        mark2 = 2;
        break;
      case 'c':
        cards[1].replace_card(3, random_numbers[2] + '0');
        mark2 = 3;
        break;
      case 'd':
        cards[1].replace_card(4, random_numbers[3] + '0');
        mark2 = 4;
        break;
      case 'e':
        cards[1].replace_card(5, random_numbers[4] + '0');
        mark2 = 5;
        break;
      case 'f':
        cards[1].replace_card(6, random_numbers[5] + '0');
        mark2 = 6;
        break;
      case 'g':
        cards[1].replace_card(7, random_numbers[6] + '0');
        mark2 = 7;
        break;
      case 'h':
        cards[1].replace_card(8, random_numbers[7] + '0');
        mark2 = 8;
        break;
      case 'i':
        cards[1].replace_card(9, random_numbers[8] + '0');
        mark2 = 9;
        break;
      case 'j':
        cards[1].replace_card(10, random_numbers[9] + '0');
        mark2 = 10;
        break;
      case 'k':
        cards[1].replace_card(11, random_numbers[10] + '0');
        mark2 = 11;
        break;
      case 'l':
        cards[1].replace_card(12, random_numbers[11] + '0');
        mark2 = 12;
        break;
      case 'm':
        cards[1].replace_card(13, random_numbers[12] + '0');
        mark2 = 13;
        break;
      case 'n':
        cards[1].replace_card(14, random_numbers[13] + '0');
        mark2 = 14;
        break;
      case 'o':
        cards[1].replace_card(15, random_numbers[14] + '0');
        mark2 = 15;
        break;
      case 'p':
        cards[1].replace_card(16, random_numbers[15] + '0');
        mark2 = 16;
        break;
      default:
        abjad2 = '\0';
        break;
      }

      // Mengecek pilihan
      cards[1].display_cards(98, 6);

      // Cek kondisi menang
      if (cards[1].check_cards())
        break;
      else
      {
        // Jika salah satu/kedua pilihan salah
        if (abjad1 == '\0' || abjad2 == '\0')
        {
          // Jika pilihan pertama salah & kartu kedua sudah terbuka
          if ((abjad1 == '\0' && abjad2 != '\0') && terbuka[mark2 - 1] == true)
          {
            features::goto_xy(83, 23);
            std::cout << "- Pilihan pertama salah";
            features::goto_xy(83, 24);
            std::cout << "- Kartu kedua sudah terbuka!";
          }
          // Jika pilihan kedua salah & kartu pertama sudah terbuka
          else if ((abjad1 != '\0' && abjad2 == '\0') && terbuka[mark1 - 1] == true)
          {
            features::goto_xy(83, 23);
            std::cout << "- Pilihan kedua salah";
            features::goto_xy(83, 24);
            std::cout << "- Kartu pertama sudah terbuka!";
          }
          // Jika pilihan pertama salah & kartu kedua belum terbuka
          else if ((abjad1 == '\0' && abjad2 != '\0') && terbuka[mark2 - 1] == false)
          {
            features::goto_xy(83, 23);
            std::cout << "Pilihan pertama salah!";
            cards[1].replace_card(mark2, '*');
          }
          // Jika pilihan kedua salah & kartu pertama belum terbuka
          else if ((abjad1 != '\0' && abjad2 == '\0') && terbuka[mark1 - 1] == false)
          {
            features::goto_xy(83, 23);
            std::cout << "Kartu kedua salah!";
            cards[1].replace_card(mark1, '*');
          }
          else
          {
            features::goto_xy(83, 23);
            std::cout << "Pilihan pertama dan kedua salah!";
          }
        }
        // Jika kedua pilihan benar tapi membuka kartu yang sudah terbuka (salah satu/kedua2nya)
        else if ((random_numbers[mark1 - 1] != random_numbers[mark2 - 1]) && mark1 != mark2 && terbuka[mark1 - 1] == true || terbuka[mark2 - 1] == true)
        {
          if (terbuka[mark1 - 1] == false && terbuka[mark2 - 1] == true)
          {
            features::goto_xy(83, 23);
            std::cout << "Kartu kedua sudah terbuka!";
            cards[1].replace_card(mark1, '*');
          }
          else if (terbuka[mark2 - 1] == false && terbuka[mark1 - 1] == true)
          {
            features::goto_xy(83, 23);
            std::cout << "Kartu pertama sudah terbuka!";
            cards[1].replace_card(mark2, '*');
          }
          else
          {
            features::goto_xy(83, 23);
            std::cout << "Kartu sama dan sudah terbuka!";
          }
        }
        // Jika bernilai sama dan kedua2nya belum terbuka
        else if ((random_numbers[mark1 - 1] == random_numbers[mark2 - 1]) && (terbuka[mark1 - 1] == false && terbuka[mark2 - 1] == false) && mark1 != mark2)
        {
          features::goto_xy(83, 23);
          std::cout << "BENAR :)";
          terbuka[mark1 - 1] = true;
          terbuka[mark2 - 1] = true;
        }
        // Jika bernilai sama dan hanya memilih ke satu kartu selain kartu yang telah terbuka
        else if ((random_numbers[mark1 - 1] == random_numbers[mark2 - 1]) && mark1 == mark2)
        {
          features::goto_xy(83, 23);
          std::cout << "Anda memilih kartu yang sama!";

          if (terbuka[mark1 - 1] == false)
            cards[1].replace_card(mark1, '*');
        }
        else
        {
          features::goto_xy(83, 23);
          std::cout << "Coba lagi :)";

          cards[1].replace_card(mark1, '*');
          cards[1].replace_card(mark2, '*');
        }
      }

      Sleep(3000);
    }

    // Dealokasi memory
    delete[] random_numbers;
  }

  void finish()
  {
    system("CLS");
    border _border;
    _border.border_menu();
    features::tulisan_menang();

    features::goto_xy(75, 14);
    system("PAUSE");
  }
};

int main(int argc, char const *argv[])
{
  game mainkan;

  mainkan.menu();
  mainkan.game_play();
  mainkan.finish();

  return 0;
}
