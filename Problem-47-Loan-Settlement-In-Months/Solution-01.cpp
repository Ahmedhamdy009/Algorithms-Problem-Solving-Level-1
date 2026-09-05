#include <iostream>
using namespace std;
int main()
{
    int LoanAmount, MonthlyInstallment, TotalMonths;
    cout<<"Enter the LoanAmount \n";
    cin>>LoanAmount;
    cout<<"Enter the MonthlyInstallment \n";
    cin>>MonthlyInstallment;
    TotalMonths = LoanAmount / MonthlyInstallment;
    cout<<TotalMonths<<" Months "<<endl;
}
