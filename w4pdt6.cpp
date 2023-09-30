#include <iostream>
using namespace std;

void longestTime(int hour, int min);
main()
{
    int hour, min;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;
    longestTime(hour, min);
}
void longestTime(int hour, int min)
{
    int hourTomin;
    hourTomin = hour * 60;
    if (hourTomin < min)
    {
        cout << min;
    }
    if (hourTomin > min)
    {
        cout << hour;
    }
}