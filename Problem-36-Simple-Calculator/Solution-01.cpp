#include <iostream>
using namespace std;
enum enOperationType{Add = '+' ,Subtract = '-',Multiply = '*',Divide = '/' };
float ReadNumber(string Massage)
{
 float Number = 0;
 cout<<Massage<<endl;
 cin>>Number;
 return Number;
}
enOperationType ReadType()
{
 char OT = '+';
 cout<<"Please Enter Operation Type ( + , - , * , / )? \n";
 cin>>OT;
 return (enOperationType)OT;
}
float Calculate(float Number1, float Number2,enOperationType OpType)
{
 switch (OpType)
 {
 case enOperationType::Add:
 return Number1 + Number2;
 case enOperationType::Subtract:
 return Number1 - Number2;
 case enOperationType::Multiply:
 return Number1 * Number2;
 case enOperationType::Divide:
 return Number1 / Number2;
 default:
 return Number1 + Number2;
 }
}
int main()
{
 float Number1 = ReadNumber("Please Enter the First Number ? ");
 enOperationType OpType = ReadType();
 float Number2 = ReadNumber("Please Enter the Second Number ? ");
 cout<<"Result = "<<Calculate(Number1,Number2,OpType)<<endl;
}
