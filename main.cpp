#include "headers.h"

int preV = 0x00;
int Pf = '/'; //Face of the pen

int main()
{
    system("TITLE dosPaint R6");
    system("cls");
    system("COLOR f0"); //

    int Pc, tasto,
        Px, Py,
        x , y;

    preV = 0x00;

    Px = rand()%(BORDODESTRO-BORDOSINISTRO-1)+BORDOSINISTRO+1;
    Py = rand()%(BORDOSINISTRO-BORDOSOPRA-1)+BORDOSOPRA+1;
    Pc = 15;
    Pf = '/'; //Face of the pen

    DrawCanvas(x,y);

    TitleClr();
    commandHelper(); //all the comands for the colors

    Gotoxy(Px,Py);
    TextColor(0xF0);

    cout << char(Pf); //show the face of the pen

    PollingCycle(Px, Py, tasto);

    system("CLS");

}

#include "subs\SubProgram.h"

