#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void maze();
void playermove(int x, int y);
main()
{
    int x = 5, y = 6;
    system("cls");
    maze();
    while (x <= 20)
    {
        playermove(x, y);
        x = x + 1;
    }
        if (x == 21)
        {
            while (x <= 21 && x != 6) /**/
            {
                playermove(x, y);
                x = x - 1;
            }
        }
        while (x == 6)
        {
            playermove(x, y);
            y = y - 1;

            if (y == 2)
            {
                while (x <= 20)
                {

                    playermove(x, y);
                    x = x + 1;
                    if (x == 20)
                    {
                        while (y <= 6)
                        {
                            playermove(x, y);
                            y = y + 1;
                        }
                    }
                }
            }
        }
    
    gotoxy(0, 15);
}

void maze()
{
    cout << "*************************" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*                       *" << endl;
    cout << "*************************" << endl;
}
void playermove(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
    Sleep(400);
    gotoxy(x, y);
    cout << " ";
}