/*
    dosPaint, an old fashioned clone of Paint
    viksn0w, (C) 2018-2019, Alpha - R6
    For the changelog, read the changelogR6 in the folder
*/


#define ESC 27
#define CANC 8
#define RET 13

#define BORDODESTRO    80
#define BORDOSINISTRO  20
#define BORDOSOPRA      8
#define BORDOSOTTO     40


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

void TitleClr();
void commandHelper();
void Gotoxy (int x, int y);
void TextColor (int Colore);
void DrawCanvas(int x, int y);
void PollingCycle(int &Px, int &Py, int &tasto);
