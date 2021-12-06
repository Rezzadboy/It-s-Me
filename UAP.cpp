#include <iostream>
#include <cstdio>
#include <ncurses.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

#define batas_atas 1
#define batas_bawah 30
#define batas_kanan 30
#define batas_kiri 1
using namespace std;

int x, y, m, n;
// void hapus(); // on going
// void gerakan();
void gbk(); // sudah ada
void tebak_angka(); // sudah ada
void loading(); // sudah ada
void uji_coba_game(); // on-going
void login(); // sudah ada
void menu(); // sudah ada

int main(){
    int b;

    printf("Selamat datang Silahkan pilih:\n");
    printf("Sudah ada Akun?\n");
    printf("1. 1ogin\n");
    printf("2. Masuk Sebagai Guest\n");
    cin>>b;
    system("cls");

    switch(b){ // jika pemain memilih 1 maka akan berpindah ke menu login 
        case 1:
            login();
            break;
        
        case 2: // jika pemain memilih 2 akan berpindah ke menu game sebagai guest
            loading();
            printf("Anda Dalam Mode Guest\n");
            system("pause");
            system("cls");
            menu();
            break;
        default: // jika tidak ada yang sesuai maka akan kembali mengulang untuk memilih menu
            loading();
            printf("Silahkan pilih ulang");
            system("pause");
            system("cls");
            main();
            break;
    } 
}

void loading(){
    for(int a=0; a<2; a++){ // berisi loopingan untuk semacam tampilan loading
        printf("Loading.....");
        Sleep(500);
        system("cls");

        printf("Loading...");
        Sleep(500);
        system("cls");

        printf("Loading.");
        Sleep(500);
        system("cls");
    }
}

void login(){
    string nama;
    int pw;

    printf("Masukan Username: ");
    cin>> pw; // login dengan menggunakan npm
    
    loading();
    switch(pw){ // jika sesuai disalah satu case akan berpindah ke menu daftar game
        case 2117051057:
            printf("Selamat Datang Reza Nur Ramadhan\n");
            system("pause");
            system("cls");
            menu();
            break;
        
        case 2117051030:
            printf("Selamat Datang Osmycin Amelia\n");
            system("pause");
            system("cls");
            menu();
            break;

        case 2117051038:
            printf("Selamat Datang Aprilia Anggun\n");
            system("pause");
            system("cls");
            menu();
            break;

        default: // jika username tidak sesuai akan mengulang mebgisi username
            printf("Login kembali\n");
            system("pause");
            system("cls");
            login();
            break;
    }
}

void menu(){
    string games[3]={"1. Gunting-Batu-Kertas","2. Tebak Angka","3.game(on-going)"};
    int c, d;

    printf("Selamat datang di Permainan serba ada\n");
    printf("Silahkan Pilih Game yang dimainkan: \n");
    for(c=0; c<3; c++){ // me looping array games
         cout<<games[c]<<"\n";
    }
    cin>>d;
    system("cls");
    
    loading(); // void loading
    switch (d)
    {
    case 1:
        gbk();
        break;
    
    case 2:
        tebak_angka();
        break;
    
    case 3: 
        uji_coba_game();
        break;
    }
}

void gbk(){

    // tipe data berisi peraturan dan tata cara permainan
    string cara[5]={"1. Permainan dimainkan 2 pemain",
                    "2. Pemain Memilih antara Gunting(g), kertas(k), batu(b)",
                    "3. Batu < kertas, kertas < gunting, gunting < kertas",
                    "4. Pemain akan Memasang Uang yang dipertaruhkan",
                    "5. Pemain Yang kalah akan kehilangan uangnya"};
    int e, g, uang, uang_musuh, total_uang;
    char milih, jawaban;

    printf("Cara dan Peraturan Permainan: \n"); // looping menampilkan peraturan
    for(e=0; e<5; e++){
        cout<<cara[e]<<"\n";
    }
    Sleep(500);
    system("cls");

    do // loopingan untuk menjalankan program gunting batu kertas
    {   
        printf("Masukan Jumlah uang yang ingin dipetaruhkan: $.");
        scanf("%d", &uang); // meng input kan jumlah uang

        loading();
        srand(time(NULL)); // me random angka uang musuh
        uang_musuh = rand() % 1000 + 1;

        printf("Uang Anda: $.%d\n",uang);
        printf("uang musuh: $.%d\n", uang_musuh);
        total_uang = uang + uang_musuh; // jumlaah total uang pemain + uang musuh
        system("pause");
        system("cls");

        printf("jumlah total uang yang dipetaruhkan: $.%d\n", total_uang);
        printf("masukan pilihan anda: g/b/k?"); 
        cin>>milih; // pemain akan memilih char diantara g = gunting, b= batu, k = kertas
        system("cls");

        switch(milih){
            case 'g': // pemain memilih gunting
                srand(time(NULL)); // merandom angka yang akan digunakan sebagai gunting,batu,kertas
                g = rand() % 3 + 1; // 1 = gunting, 2 = batu, 3 = kertas
                if(g==1){ // jika g mengacak dan menghasilkan gunting
                    printf("Pilihan anda= Gunting\n");
                    printf("Musuh anda = Gunting\n");
                    Sleep(500);
                    loading();

                    printf("Seimbang\n");
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban; // menjawab y sebagai y, atau n sebagai no
                    system("cls");

                }else if (g==2){ // jika g mengacak dan menghasilkan batu
                    printf("Pilihan anda= Gunting\n");
                    printf("Musuh anda = Batu\n");
                    Sleep(500);
                    loading();

                    printf("Anda Kalah\n");
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");

                }else{ // jika g mengacak dan menghasilkan kertas
                    printf("Pilihan anda= Gunting\n");
                    printf("Musuh anda = Kertas\n");
                    Sleep(500);
                    loading();

                    printf("Anda Menang\n");
                    printf("Anda Mendapatkan Uang sebesar: $.%d\n", total_uang);
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");
                }
                break;

            case 'b': // pemain memilih batu
                srand(time(NULL));
                g = rand() % 3 + 1; // 1 = gunting, 2 = batu, 3 = kertas
                if(g==1){ // jika g mengacak dan menghasilkan gunting
                    printf("Pilihan anda= Batu\n");
                    printf("Musuh anda = Gunting\n");
                    Sleep(500);
                    loading();

                    printf("Anda Menang\n");
                    printf("Anda Mendapatkan Uang sebesar: $.%d\n", total_uang);
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");

                }else if (g==2){ // jika g mengacak dan menghasilkan batu
                    printf("Pilihan anda= Batu\n");
                    printf("Musuh anda = Batu\n");
                    Sleep(500);
                    loading();

                    printf("Seimbang");
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");

                }else{ // jika g mengacak dan menghasilkan kertas
                    printf("Pilihan anda= Batu\n");
                    printf("Musuh anda = Kertas\n");
                    Sleep(500);
                    loading();

                    printf("Anda Kalah\n");
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");
                }
                break;
        
            case 'k': // pemain memilih kertas
                srand(time(NULL));
                g = rand() % 3 + 1; // 1 = gunting, 2 = batu, 3 = kertas
                if(g==1){ // jika g mengacak dan menghasilkan gunting
                    printf("Pilihan anda= Kertas\n");
                    printf("Musuh anda = Gunting\n");
                    Sleep(500);
                    loading();

                    printf("Anda Kalah\n");
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");

                }else if (g==2){ // jika g mengacak dan menghasilkan batu
                    printf("Pilihan anda= Kertas\n");
                    printf("Musuh anda = Batu\n");
                    Sleep(500);
                    loading();

                    printf("Anda Menang\n");
                    printf("Anda Mendapatkan Uang sebesar: $.%d\n", total_uang);
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");
                }else{ // jika g mengacak dan menghasilkan kertas

                    printf("Pilihan anda= Kertas\n");
                    printf("Musuh anda = Kertas\n");
                    Sleep(500);
                    loading();

                    printf("Seimbang\n");   
                    printf("Ingin Main lagi? (y/n)\n");
                    cin>>jawaban;
                    system("cls");
                }
                break;
        }
    } while (jawaban == 'y'); // jika pemain menjawab y makan permainan akan dimulai lagi
    menu(); // jika pemain menjawab n maka permainan akan diberhentikan dan pemain akan kemabli ke menu awal
}

void tebak_angka(){
    int jawaban, pilih; 
    int kesempatan = 2; // hanya memiliki 2 kali kesempatan menjawab
    char lagi;

    printf("Selamat Datang di Game Tebak Angka\n"); // penjelasan permainan
    printf("Cara Main dan Peraturan:\n");
    printf("1.Anda diharuskan menebak angka diantara 1-9\n2. jawaban salah akan mengurangi kesempatan anda\n");
    Sleep(1000);
    
    do
    {
        system("cls");
        srand(time(NULL)); // komputer akan mengacak angka diantara 1-9
        jawaban = rand() % 9 + 1;

        printf("Masukan Tebakan anda: "); // pemain hanya perlu menebak angka nya diantara 1-9
        scanf("%d", &pilih);

        while (pilih != jawaban && kesempatan > 1) // jika tebakan salah ankan mengurangi kesempatan permainan
        {
            printf("Tebakan anda salah, tebak lagi\n");
            kesempatan--; // mengurangi kesempatan anda menjawab
            printf("Sisa Kesempatan Anda: %d\n", kesempatan);
            printf("tebak lagi: ");
            scanf("%d", &pilih); // pemain menebak angka lagi
        }

        if (pilih == jawaban && kesempatan > 0){ // jika jawaban benar dan kesempatan diatas 0, mkan pemain menang
            printf("Tebakan anda benar\nSelamat Telah memenangkan permainan\ningin bermain lagi?(y/n)\n");
            scanf("%s", &lagi); // pem ain menjawab y atau n untuk bermain game kembali

        }else{
            printf("jawaban yang benar adalah: %d\n", jawaban); // jika kesempatan habis maka pemain kalah
            printf("Maaf Anda kurang beruntung, silahkan coba lagi\n ingin bermain lagi? (y/n)\n");
            scanf("%s", &lagi);
        }
    } while (lagi == 'y'); //loopingan jika anda menjawab y, maka permainan akan dimainkan kembali
    menu(); // jika menjawab n makan akan kembali ke menu awal memilih game
}

void uji_coba_game(){

    initscr();

    char gerakan;
    x = 2, y = 2;

    move(y, x);
    mvprintw(y, x, ">"); // mindahin
    refresh();

    while (true){
        gerakan = getch();

        switch (gerakan){
            case 'a':
                if (x == batas_kiri){

                }else{
                    x-=1;
                    m = x + 2;// 27+2=29
                    n = x + 1;
                    mvprintw(y, m,"  "); // 26,y
                    mvprintw(y, n,"  ");
                }
                break;

            case 'd':
                if (x == batas_kanan){

                }else{
                    x+=1; // 27
                    m = x-1;// 27-1=26
                    mvprintw(y, m,"  "); // 26,y
                    refresh();
                }
                break;

            case 'w':
                if (y == batas_atas){

                }else{
                    y-=1; // 2
                    m = y + 1; // 2 + 1 = 3
                    n = x + 2; 
                    mvprintw(m, x, "  ");
                    mvprintw(m, n, "  ");
                    refresh();
                }
                break;

            case 's':
                if (y == batas_bawah){

                }else{
                    y+=1;
                    m = y - 1;
                    n = x + 1;
                    mvprintw(m, n, "  ");
                    mvprintw(m, x, "  ");
                    refresh();
                }
                break;
            }
            
            move(y, x);
            mvprintw(y, x, ">");
            refresh();
    }
}

