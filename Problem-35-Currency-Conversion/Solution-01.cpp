#include <iostream>
using namespace std;
int main()
{
    float pennies, Nickels,Dimes,Quarters,Dollars,totalPennies,totalDollarts;
    cout<<"Please the pennies: \n";
    cin>>pennies;
    cout<<"Please the Nickels: \n";
    cin>>Nickels;
    cout<<"Please the Dimes: \n";
    cin>>Dimes;
    cout<<"Please the Quarters: \n";
    cin>>Quarters;
    cout<<"Please the Dollars: \n";
    cin>>Dollars;
    totalPennies=(pennies * 1) + (Nickels * 5 )+ (Dimes * 10) + (Quarters * 25)+(Dollars * 100);
    totalDollarts= (totalPennies / 100);
    cout<<"total pennies "<<totalPennies<<endl;
    cout<<"total doller "<<totalDollarts<<endl;
}
