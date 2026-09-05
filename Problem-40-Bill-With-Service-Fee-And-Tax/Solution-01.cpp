#include <iostream>
using namespace std;
int main()
{
    float BillValue , TotalBill;
    cout<<"Enter the BillValue \n";
    cin>>BillValue;
    TotalBill = BillValue * 1.1;
    TotalBill = TotalBill * 1.16;
    cout<<TotalBill;
}
