#include <iostream>
using namespace std;
void discount(string name, float price);

main()
{
    string name;
    float price;
    while (true)
    {
        cout << "Enter the country's name: ";
        cin >> name;
        cout << "Enter the ticket price in dollars: $";
        cin >> price;
        discount(name, price);
    }
}
void discount(string name, float price)
{

    float finalPrice1;
    if (name == "Pakistan")
    {
        finalPrice1 = price - (price * 5 / 100);
        cout << "Final ticket price after discount: $" << finalPrice1 << endl;
    }
    float finalPrice2;
    if (name == "Ireland")
    {
        finalPrice2 = price - (price * 10 / 100);
        cout << "Final ticket price after discount: $" << finalPrice2 << endl;
    }
    float finalPrice3;
    if (name == "India")
    {
        finalPrice3 = price - (price * 20 / 100);
        cout << "Final ticket price after discount: $" << finalPrice3 << endl;
    }
    float finalPrice4;
    if (name == "England")
    {
        finalPrice4 = price - (price * 30 / 100);
        cout << "Final ticket price after discount: $" << finalPrice4 << endl;
    }
    float finalPrice5;
    if (name == "Canada")
    {
        finalPrice5 = price - (price * 45 / 100);
        cout << "Final ticket price after discount: $" << finalPrice5 << endl;
    }
}