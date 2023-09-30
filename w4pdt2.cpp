#include <iostream>
using namespace std;
void Reverse(string expression);
main()
{

    string value;
    cout << "Enter 'true' or 'false': ";
    cin >> value;
    Reverse(value);
}

void Reverse(string expression)
{
    if (expression == "true")
    {
        cout << "false";
    }
    if (expression == "false")
    {
        cout << "true";
    }
}