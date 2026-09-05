#include <iostream>
using namespace std;
int main()
{
    int LoanAmount, HowManyMonthly, MonthlyInstall;
    cout<<"Enter the LoanAmount \n";
    cin>>LoanAmount;
    cout<<"Enter the MonthlyInstallment \n";
    cin>>HowManyMonthly;
    MonthlyInstall = LoanAmount / HowManyMonthly;
    cout<<MonthlyInstall<<" Months "<<endl;
}
