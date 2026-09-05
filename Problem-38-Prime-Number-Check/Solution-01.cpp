#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enPrimeNotPrime {Prime = 1, NotPrime = 2 };
float ReadPositiveNumber(string Massage)
{
 int Number = 0;
 do
 {
   cout<<Massage<<endl;
   cin>>Number;
 } while (Number <=0);
 return Number;
}
enPrimeNotPrime PrimeOrNotPrime(int Number)
{
 int HalfNumber = 0;
 HalfNumber = round(Number /2);
 for(int i =2 ;i <= HalfNumber ; i++)
 {
   if(Number % i == 0)
   return enPrimeNotPrime::NotPrime;
   else
   return enPrimeNotPrime::Prime;
 }
}
void PrintNumberType(float Number) {
switch (PrimeOrNotPrime(Number))
{
 case enPrimeNotPrime::Prime:
 cout << "The Number is Prime \n";
 break;
 case enPrimeNotPrime::NotPrime:
 cout << "The Number is Not Prime \n";
 break;
}
}
int main()
{
 PrintNumberType(ReadPositiveNumber("please enter a Positive Number : "));
}
