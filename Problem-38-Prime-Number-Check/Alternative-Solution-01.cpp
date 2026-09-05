#include <iostream>
#include <string>
using namespace std;
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
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
enPrimeNotPrime PrimeOrNotPrime(int Number)
{
    if (Number == 1)
        return NotPrime;
    for (int i = 2; i <= Number / 2; i++)
    {
        if (Number % i == 0)
            return NotPrime;
    }
    return Prime;
}
void PrintNumberType(int Number)
{
    if (PrimeOrNotPrime(Number) == Prime)
        cout << "The Number is Prime\n";
    else
        cout << "The Number is Not Prime\n";
}
int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number:");
    PrintNumberType(Number);
    return 0;
}
