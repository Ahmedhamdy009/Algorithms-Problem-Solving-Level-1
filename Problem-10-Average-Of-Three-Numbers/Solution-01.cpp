#include <iostream>
using namespace std;
void ReadNumbers(int &Num1,int &Num2,int &Num3)
{
    cout<<"Please Enter the Number 1 ? \n";
    cin>>Num1;
    cout<<"Please Enter the Number 2 ? \n";
    cin>>Num2;
    cout<<"Please Enter the Number 3 ? \n";
    cin>>Num3;
}
int SumOf3Numbers(int Num1,int Num2,int Num3)
{
   return Num1 + Num2 +Num3 ;
}
float CalculateAverage(int Num1,int Num2,int Num3)
{
    return (float)SumOf3Numbers( Num1 , Num2 , Num3)/3 ;
}
void PrintResult(int Average)
{
   cout<<"The Average Sum Of Numbers is: "<<Average;
}
int main() 
{
    int Num1,Num2,Num3;
    ReadNumbers(Num1,Num2,Num3);
    PrintResult(CalculateAverage(Num1, Num2,Num3));
}
