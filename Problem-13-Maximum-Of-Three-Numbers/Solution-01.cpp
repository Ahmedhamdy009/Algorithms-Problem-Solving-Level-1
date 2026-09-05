#include <iostream>
using namespace std;
void ReadNumbers(int &Num1,int &Num2,int &Num3)
{
    cout<<"Please Enter the Mark 1 ? \n";
    cin>>Num1;
    cout<<"Please Enter the Mark 2 ? \n";
    cin>>Num2;
    cout<<"Please Enter the Mark 3 ? \n";
    cin>>Num3;
}
int MaxOf2Numbers(int Num1,int Num2,int Num3)
{
   if(Num1 > Num2 && Num1 >Num3)
   return Num1;
   else if(Num2 > Num1 && Num2 > Num3)
   return Num2;
   else 
   return Num3;
}
void PrintAverage(int Max)
{
   cout<<"The Maximum Number is : "<<Max<<endl;
}
int main() 
{
    int Num1,Num2,Num3;
    ReadNumbers(Num1,Num2,Num3);
    PrintAverage(MaxOf2Numbers(Num1,Num2,Num3));
}
