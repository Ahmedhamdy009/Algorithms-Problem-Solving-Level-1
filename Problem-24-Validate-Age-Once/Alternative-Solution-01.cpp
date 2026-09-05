#include <iostream>
using namespace std;
int ReadAge(int Age)
{
 cout<<"Please enter your Age : ";
 cin>>Age;
 return Age;
}
bool CheckValidationAge(int Number,int From,int To)
{
  return Number >= From && Number <=To ;
}
void PrintResult (int Age)
{
    if(CheckValidationAge(Age,18,45))
    cout<<Age<<" Valid Age";
    else
    cout<<Age<<" Invalid Age";
}
int main()
{
  int age;
 PrintResult(ReadAge(age));
}
