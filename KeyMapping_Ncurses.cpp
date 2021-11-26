#include <ncurses.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main(){

    initscr();
    int x=1;
    int y=1;

    WINDOW * win = newwin(30,30,1,1); // munculin layar windows baru;
    refresh();

    box(win, 0, 0);
    wmove(win, y, x);
    wprintw(win, "O");
    wrefresh(win);
    wprintw(win, "r");
    wrefresh(win);

    while(true){
        char movement= wgetch(win);

        switch(movement)
        {
        case 'a':
            if(x==1){
            }else{
                x--;
            }
            break;
        case 'd':
            if(x==27){
            }else{
                x++;
            }
            break;
         case 'w':
            if(y==1){
                y=27;
            }else{
                y--;
            }
            break;
         case 's':
            if(y==27){
                y=1;
            }else{
                y++;
            }
            break;
        }
        wclear(win);
        box(win, 0, 0);
        wmove(win, y, x);
        wprintw(win, "O");
        wrefresh(win);
        wprintw(win, "r");
    	wrefresh(win);

    }

}
