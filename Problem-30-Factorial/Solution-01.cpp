#include <iostream>
using namespace std;
int ReadNumber()
{
    int N;
    cout<<"Please Enter s Positive N: ";
    cin>>N;
    return N;
}
int PrintCalculateFactorial(int N)
{
    int Factorial=1;
    for(int i=N;i>=1;i--)
    {
    Factorial *=i;
    }
    return Factorial;
}
int main()
{
 int Number = ReadNumber();
 cout<<PrintCalculateFactorial(Number);
}
