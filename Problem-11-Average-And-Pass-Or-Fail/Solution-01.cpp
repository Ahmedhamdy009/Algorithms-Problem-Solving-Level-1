#include <iostream>
using namespace std;
enum enPassFail {Pass = 1 , Fail = 2};
int ReadNumbers(int &Mark1,int &Mark2,int &Mark3)
{
    cout<<"Please Enter the Mark 1 ? \n";
    cin>>Mark1;
    cout<<"Please Enter the Mark 2 ? \n";
    cin>>Mark2;
    cout<<"Please Enter the Mark 3 ? \n";
    cin>>Mark3;
    return Mark1,Mark2,Mark3;
}
int SumOf3Numbers(int Mark1,int Mark2,int Mark3)
{
   return Mark1 + Mark2 + Mark3 ;
}
float CalculateAverage(int Mark1,int Mark2,int Mark3)
{
    return (float)SumOf3Numbers( Mark1,Mark2 ,Mark3)/3 ;
}
enPassFail CheckAverage(float Average)
{
    if(Average >= 50)
   return enPassFail::Pass;
    else
   return enPassFail::Fail;

}
void PrintAverage(float Average)
{
   cout<<"The Average is: "<<Average;
   if(CheckAverage(Average) == enPassFail::Pass)
   cout<<"\nPass";
   else
   cout<<"\nfail";
}

int main() 
{
    int Num1,Num2,Num3;
    ReadNumbers(Num1,Num2,Num3);
    PrintAverage(CalculateAverage(Num1, Num2,Num3));
}
