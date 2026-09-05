#include <iostream>
using namespace std;
int main()
{
    double TotalSales;
    double Percentage;
    double TotalCommission;
    cout<<"Please Enter TotalSales: \n";
    cin>>TotalSales;
    if (TotalSales >= 1000000)
    Percentage = 0.01;
    else if (TotalSales >= 500000)
    Percentage = 0.02;
    else if (TotalSales >= 100000)
    Percentage = 0.03;
    else if (TotalSales >= 50000)
    Percentage = 0.05;
    else
    Percentage = 0;
    TotalCommission = Percentage *TotalSales ;
    cout<<"Total Commision = "<<TotalCommission;
    return 0;
}
