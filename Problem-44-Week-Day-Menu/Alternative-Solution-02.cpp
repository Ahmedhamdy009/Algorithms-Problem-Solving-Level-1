#include <iostream>
#include <string>
using namespace std;
enum enDaysOfWeek{Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};
int ReadNumberInRange(string Message, int From, int To) {
int Number = 0;
do { cout << Message; cin >> Number; } while (Number <From || Number >To);
return Number;
}
enDaysOfWeek ReadDaysOfWeek() {
return (enDaysOfWeek)ReadNumberInRange("please enter the number of the Day [postive and in Range [1-7] ] : ", 1, 7);
}
string PrintDays(enDaysOfWeek Day) {
switch (Day) {
case enDaysOfWeek::Sunday: return "Sunday";
case enDaysOfWeek::Monday: return "Monday";
case enDaysOfWeek::Tuesday: return "Tuesday";
case enDaysOfWeek::Wednesday: return "Wednesday";
case enDaysOfWeek::Thursday: return "Thursday";
case enDaysOfWeek::Friday: return "Friday";
case enDaysOfWeek::Saturday: return "Saturday";
default: return "Wrong Day ";
}}
int main()
{
cout << PrintDays(ReadDaysOfWeek()) << endl;
return 0;
}
