#include <iostream>
#include <string>
using namespace std;
float ReadPositiveNumber(string Message) {
float Number;
cout << Message;
cin >> Number;
return Number;
}
float HoursToDays(float NumberOfHours) { return (float)NumberOfHours / 24; }
float DaysToWeeks(float NumberOfDays) { return NumberOfDays / 7; }
float HoursToWeeks(float NumberOfHours) { return (float)NumberOfHours / 24 / 7; }
int main()
{
float NumberOfHours = ReadPositiveNumber("Please enter the Number of Hours : ");
float NumberOfDays = HoursToDays(NumberOfHours);
float NumberOfWeeks = HoursToWeeks(NumberOfHours);
float NumberOfWeeksV2 = DaysToWeeks(NumberOfDays);
cout << "*******************" << endl;
cout << "Number of Hours are : " << NumberOfHours <<endl;
cout << "Number of Days are : " << NumberOfDays <<endl;
cout << "Number of Weeks are : " << NumberOfWeeks << endl;
cout << "Number of Weeks are solution 2 : " << NumberOfWeeksV2 << endl;
}
