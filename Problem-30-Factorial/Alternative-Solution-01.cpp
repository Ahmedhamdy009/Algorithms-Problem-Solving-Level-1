#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadPositiveNumber(string Message) {
int Number;
do {
cout << Message ;
cin >> Number;
} while (Number < 0);
return Number;
}
int Factoriel(int N) {
int F = 1;
for (int Counter = N; Counter >= 1; Counter--)
{
F = F * Counter;
}
return F;
}
int main()
{
cout<< Factoriel(ReadPositiveNumber("Enter your Number : "));
}
