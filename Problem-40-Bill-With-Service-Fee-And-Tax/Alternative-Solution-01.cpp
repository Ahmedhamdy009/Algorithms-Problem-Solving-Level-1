#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}
void PrintTotalBillAfterServiceAndTax()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
    cout<<"Total Bill = "<<TotalBill<<endl;
    cout<<"TotalBillAfterServiceAndTax = "<<TotalBillAfterServiceAndTax(TotalBill);
}
int main()
{
    PrintTotalBillAfterServiceAndTax();
    return 0;
}
