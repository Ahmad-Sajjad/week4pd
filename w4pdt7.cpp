#include <iostream>
using namespace std;
void flowerShop(int redRose, int whiteRose, int tulips);
main()
{
    int redRose, whiteRose, tulips;
    cout << "Red Rose: ";
    cin >> redRose;
    cout << "White Rose: ";
    cin >> whiteRose;
    cout << "Tulips: ";
    cin >> tulips;
    flowerShop(redRose, whiteRose, tulips);
}
void flowerShop(int redRose, int whiteRose, int tulips)
{
    float price, finalPrice;
    price = redRose * 2 + whiteRose * 4.10 + tulips * 2.50;
    if (price > 200)
    {
        finalPrice = price - (price * 20 / 100);
        cout << "Original Price: $" << price << endl;
        cout << "Price after Discount: $" << finalPrice;
    }
    if (price < 200)
    {
        cout << "Original Price: $" << price << endl;
        cout << "No discount applied.";
    }
}