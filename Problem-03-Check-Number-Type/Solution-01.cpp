#include <iostream>
using namespace std;
enum enNumberType {Odd = 1 , Even = 2 };
int ReadNumber()
{
    int Num;
    cout<<"Please Enter the Number? "<<endl;
    cin>>Num;
    return Num;
}
enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
    return enNumberType::Even;
    else
    return enNumberType::Odd;
}
void PrintNumberType(int Num,enNumberType NumberType)
{
    if(NumberType == enNumberType::Even )
    cout<<Num<<" Number is Even. \n";
    else
    cout<<Num<<" Number is Odd \n";

}
int main() 
{
    //الافضل
    int Num = ReadNumber() ;
     enNumberType Result = CheckNumberType(Num);
     PrintNumberType(Num,Result);
    // PrintNumberType(CheckNumberType(ReadNumber()));
    //دي هنطبع الجملة
    /*
    او كدا 
    int Num = ReadNumber();
 enNumberType Result = CheckNumberType(Num);
 PrintNumberType(Result);
    */
    return 0;

}
