#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours/24;
}
float HoursToWeek(float NumberOfHours)
{
    return (float)NumberOfHours/24/7;
}
float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays/7;
}
void PrintConvertHoursIntoDaysAndWeeks()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");
    float HoursOfDays  = HoursToDays(NumberOfHours);
    float NumberOfWeek  = DaysToWeeks(HoursOfDays);
    cout<<endl;
    cout<<"Total Hours = "<<NumberOfHours<<endl;
    cout<<"Total Days = "<<HoursOfDays<<endl;
    cout<<"Total Weeks = "<<HoursToWeek(NumberOfHours)<<endl;
}
int main()
{
    PrintConvertHoursIntoDaysAndWeeks();
    return 0;
}
