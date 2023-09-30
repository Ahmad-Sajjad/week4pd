#include <iostream>
#include<windows.h>
using namespace std;


void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


main(){
string name;
int x = 30,y = 15;
    system("cls");
    cout<<"Enter your name: ";
    cin>>name;
    gotoxy(x,y);
    cout<<name;

    gotoxy(0,40);
}