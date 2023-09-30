#include <iostream>
using namespace std;
void pet(int holidays);
main()
{
    int holidays;
    cout << "Holidays: ";
    cin >> holidays;
    pet(holidays);
}
void pet(int holidays)
{
    float workingDays;
    workingDays = 365 - holidays;
    float plays;
    plays = workingDays * 63 + holidays * 127;
    //     float time;
    //     time = 30000 - plays;
    //     long double IntoMin = time / 60;
    // // cout<<IntoMin<<endl;
    //     int separateWholeNumber;
    //     separateWholeNumber = IntoMin;
    //     // cout<<separateWholeNumber<<endl;
    //     long double decimalPart;
    //     decimalPart = IntoMin - separateWholeNumber;
    //     int min;
    //     min = decimalPart * 60;
    //     // cout<<min<<endl;

    if (plays < 30000)
    {

        float time;
        time = 30000 - plays;
        long double IntoMin = time / 60;
        // cout<<IntoMin<<endl;
        int separateWholeNumber;
        separateWholeNumber = IntoMin;
        // cout<<separateWholeNumber<<endl;
        long double decimalPart;
        decimalPart = IntoMin - separateWholeNumber;
        int min;
        min = decimalPart * 60;
        // cout<<min<<endl;
        cout << "Tom sleeps well" << endl;

        cout << separateWholeNumber << " hours and " << min << " minutes for play";
    }
    if (plays > 30000)
    {
        float workingDays1;
        workingDays1 = 365 - holidays;
        float plays1;
        plays1 = workingDays1 * 63 + holidays * 127;
        float time1;
        time1 = plays1 - 30000;
        long double IntoMin1 = time1 / 60;
        // cout<<IntoMin<<endl;
        int separateWholeNumber1;
        separateWholeNumber1 = IntoMin1;
        // cout<<separateWholeNumber<<endl;
        long double decimalPart1;
        decimalPart1 = IntoMin1 - separateWholeNumber1;
        int min1;
        min1 = decimalPart1 * 60;
        cout << "Tom will run away" << endl;
        cout << separateWholeNumber1 << " hours and " << min1 << " minutes for play";
    }
}