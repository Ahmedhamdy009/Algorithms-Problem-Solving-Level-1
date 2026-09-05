#include <iostream>
#include <string>
using namespace std;
enum enDaysOfWeek{Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};
int ReadPositiveNumberInRange(string Message, int From, int To) {
int Number = 0;
do { cout << Message; cin >> Number; } while (Number <= 0 || (Number <From || Number >To));
return Number;
}
string PrintDays(int Number) {
switch (Number) {
case enDaysOfWeek::Sunday: return "Sunday";
case enDaysOfWeek::Monday: return "Monday";
case enDaysOfWeek::Tuesday: return "Tuesday";
case enDaysOfWeek::Wednesday: return "Wednesday";
case enDaysOfWeek::Thursday: return "Thursday";
case enDaysOfWeek::Friday: return "Friday";
case enDaysOfWeek::Saturday: return "Saturday";
default: return "Wrong Day ";
}}
void printResult(string Day) { cout << "It's " << Day; }
int main()
{
int Day = ReadPositiveNumberInRange("please enter the number of the Day [postive and in Range [1-7] ] : ", 1, 7);
printResult(PrintDays(Day));
}
