#include <iostream>
using namespace std;
int SumPositiveNumbers()
{
    int Number;
    int Sum = 0;
    cout << "Enter numbers (negative number to stop): " << endl;
    cin >> Number;
    while(Number >= 0)
    {
        Sum += Number;
        cin >> Number;
    }
    return Sum;
}
int main()
{
    int Sum = SumPositiveNumbers() ;
    cout << "Sum = " << Sum << endl;
}
