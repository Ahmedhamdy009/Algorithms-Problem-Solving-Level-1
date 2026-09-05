#include <iostream>
using namespace std;
enum enWeekDay {Sun=1 ,Mon=2,Tue=3,Wed=4 , Thu=5, Fri=6, Sat=7};
void ShowWeekDayMenue()
{
    cout<<"*****************************\n";
    cout<<"        WeekDays        \n";
    cout<<"*****************************\n";
    cout<<"1:Sunday"<<endl;
    cout<<"2:Monday"<<endl;
    cout<<"3:Tuesday"<<endl;
    cout<<"4:Wednesday"<<endl;
    cout<<"5:Thursday"<<endl;
    cout<<"6:Friday"<<endl;
    cout<<"7:Saturday"<<endl;
    cout<<"*****************************\n";
    cout<<"Please Enter the Number of days?\n";
}
enWeekDay ReadWeekDay()
{
    int wd;
    cin>>wd;
    return (enWeekDay)wd;
}
string GetWeekDayName(enWeekDay WeekDay)
{
    switch (WeekDay)
    {
    case enWeekDay::Sun: return "Sunday";
    case enWeekDay::Mon: return "Monday";
    case enWeekDay::Tue: return "Tuesday";
    case enWeekDay::Wed: return "Wednesday";
    case enWeekDay::Thu: return "Thursday";
    case enWeekDay::Fri: return "Friday";
    case enWeekDay::Sat: return "Saturday";
    default: return "Not a weekday!\n";
    }
}
int main()
{
    ShowWeekDayMenue();
    enWeekDay Day = ReadWeekDay();
    cout<<"Today is : "<<GetWeekDayName(Day)<<endl;
}
