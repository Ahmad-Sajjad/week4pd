#include <iostream>
using namespace std;
void tpChecker(int people, int rolls);

main()
{
     int people, rolls;
    cout << "Number of people in the household: ";
    cin >> people;
    cout << "Number of rolls of TP: ";
    cin >> rolls;
    tpChecker(people, rolls);
}
void tpChecker( int people,  int rolls)
{
    int days;
    days = (500 * rolls) / (57 * people);
    if (days < 14)
    {
        cout << "Your TP will only last " << days << " days, buy more!";
    }
    if (days >= 14)
    {
        cout << "Your TP will last " << days << " days, no need to panic!";
    }
}