#include <iostream>
#include <string>
using namespace std;
enum enNameOfMonths{Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, June = 6, July = 7, Aug = 8, Sept = 9, Oct = 10, Nov = 11, Dec = 12};
int ReadNumberInRange(string Message, int From, int To) {
int Number = 0;
do { cout << Message; cin >> Number; } while (Number <From || Number >To);
return Number;
}
enNameOfMonths ReadMonthOfYear() {
return (enNameOfMonths )ReadNumberInRange("please enter the number of Month [postive and in Range [1-12] ] : ", 1, 12);
}
string PrintMonths(enNameOfMonths Day) {
switch (Day) {
case enNameOfMonths::Jan: return "January";
case enNameOfMonths::Feb: return "February";
case enNameOfMonths::Mar: return "March";
case enNameOfMonths::Apr: return "April";
case enNameOfMonths::May: return "May";
case enNameOfMonths::June: return "June";
case enNameOfMonths::July: return "July";
case enNameOfMonths::Aug: return "August";
case enNameOfMonths::Sept: return "September";
case enNameOfMonths::Oct: return "October";
case enNameOfMonths::Nov: return "November";
case enNameOfMonths::Dec: return "December";
default: return "Wrong Month ";
}}
int main()
{
cout << PrintMonths(ReadMonthOfYear()) << endl;
return 0;
}
