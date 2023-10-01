#include <iostream>
#include <windows.h>
using namespace std;
void aggregate(string name, float matric, float inter, float ecat);
void compare(string name, float ecat, string name1, float ecat1);
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
    system("cls");
    gotoxy(30,1);
    cout << "UNIVERSITY ADMISSION SYSTEM" << endl;
    gotoxy(30,2);
    cout << "___________________________" << endl;
    cout << endl;
    float matric, inter, ecat;
    string name;
    gotoxy(1,5);
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your marks in matric: ";
    cin >> matric;
    cout << "Enter your marks in inter: ";
    cin >> inter;
    cout << "Enter your marks in ecat: ";
    cin >> ecat;
    aggregate(name, matric, inter, ecat);

    float matric1, inter1, ecat1;
    string name1;
    cout << "Enter your name: ";
    cin >> name1;
    cout << "Enter your marks in matric: ";
    cin >> matric1;
    cout << "Enter your marks in inter: ";
    cin >> inter1;
    cout << "Enter your marks in ecat: ";
    cin >> ecat1;
    aggregate(name1, matric1, inter1, ecat1);
    compare(name, ecat, name1, ecat1);
}
void aggregate(string name, float matric, float inter, float ecat)
{
    double aggregate;
    aggregate = (matric / 1100 * 0.3 + inter / 550 * 0.3 + ecat / 400 * 0.4) * 100;
    cout << "The aggregate of " << name << " is " << aggregate << endl;
}

void compare(string name, float ecat, string name1, float ecat1)
{
    if (ecat > ecat1)
    {
        cout << name << "'s roll number is 1 and " << name1 << "'s roll number is 2";
    }
    if (ecat1 > ecat)
    {
        cout << name1 << "'s roll number is 1 and " << name << "'s roll number is 2";
    }
}
