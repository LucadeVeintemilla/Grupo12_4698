#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <vector>
#include <winuser.h>
#include <conio.h>

using namespace std;

void Gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int place() {
    int coords;
    POINT cursor;
    GetCursorPos(&cursor);
    coords = cursor.y;

    cout << "y" << coords << endl;
    return coords;
}



#endif // TOOLS_H_INCLUDED
