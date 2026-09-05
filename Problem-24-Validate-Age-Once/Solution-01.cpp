#include <iostream>
using namespace std;
int ReadAge(int Age)
{
 cout<<"Please enter your Age : ";
 cin>>Age;
 return Age;
}
bool CheckValidationAge(int Age)
{
  if(Age >= 18 && Age <= 45)
  return true;
  else
  return false;
}
void PrintResult (bool Age)
{
    if(Age == true)
    cout<<"Valid Age";
    else
    cout<<"Invalid Age";
}
int main()
{
  int age;
 PrintResult(CheckValidationAge(ReadAge(age)));
}
