#include <iostream>
using namespace std;
int ReadAge()
{
  int Age;
 cout<<"Please enter your Age : ";
 cin>>Age;
 return Age;
}
bool ValidateNumberInRange(int Number,int From,int To)
{
  return (Number >= From && Number <=To) ;
}
int ReadUnitAgeBetween(int From,int To)
{
  int Age =0;
  do
  {
    Age = ReadAge();
  } while (!ValidateNumberInRange(Age ,From,To));
  return Age;
}
void PrintResult (int Age)
{
    cout<<"Your Age is: "<<Age<<endl;
}
int main()
{
 PrintResult(ReadUnitAgeBetween(18,45));
}
