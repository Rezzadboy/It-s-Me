#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y);
 
int main() {
    int x=50;
    int y=50;
    gotoxy(x, y);
     
    printf("o\n");
     
    getch();
 
    return 0;
}
 
void gotoxy(int x, int y) {
    COORD coord;
     
    coord.X = x;
    coord.Y = y;
     
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}