#include <iostream>
using namespace std;
enum enMonth {January=1 ,February=2,March=3,April=4 , May=5, June=6, July=7,August =8,September =9,October =10, November=11 ,December=12};
void ShowMonthMenue()
{
    cout<<"*****************************\n";
    cout<<"         Month            \n";
    cout<<"*****************************\n";
    cout<<"1:January"<<endl;
    cout<<"2:February"<<endl;
    cout<<"3:March"<<endl;
    cout<<"4:April"<<endl;
    cout<<"5:May"<<endl;
    cout<<"6:June"<<endl;
    cout<<"7:July"<<endl;
    cout<<"8:August"<<endl;
    cout<<"9:September"<<endl;
    cout<<"10:October"<<endl;
    cout<<"11:November"<<endl;
    cout<<"12:December"<<endl;
    cout<<"*****************************\n";
    cout<<"Please Enter the Number of Month?\n";
}
enMonth ReadMonth()
{
    int M;
    cin>>M;
    return (enMonth)M;
}
string GetMonthName(enMonth Month)
{
    switch (Month)
    {
        case January: return "January";
        case February: return "February";
        case March: return "March";
        case April: return "April";
        case May: return "May";
        case June: return "June";
        case July: return "July";
        case August: return "August";
        case September: return "September";
        case October: return "October";
        case November: return "November";
        case December: return "December";
        default: return "Not a Month!";
    }
}
int main()
{
    ShowMonthMenue();
    enMonth Month = ReadMonth();
    cout<<"Month is : "<<GetMonthName(Month)<<endl;
}
