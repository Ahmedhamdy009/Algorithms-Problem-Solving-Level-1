#include <iostream>
using namespace std;
enum enOddOrEven {Odd =1, Even = 2};
int ReadNumber()
{
    int N;
    cout<<"Please Enter N: ";
    cin>>N;
    return N;
}
enOddOrEven CheckOddOrEven(int Number)
{
  if(Number % 2 != 0)
  return enOddOrEven::Odd;
  else
  return enOddOrEven::Even;
}
int SumEvenFrom1toNum_UsingFor(int N)
{
  cout << "Sum Even Numbers using For Statement: \n";
  int Sum = 0;
  for(int i=1;i<=N;i++)
  {
    if(CheckOddOrEven(i) == enOddOrEven::Even)
    {
    Sum +=i;
    }
  }
  return Sum;
}
int SumEvenFrom1toNum_UsingWhile(int N)
{
  int Counter =0;
  int Sum = 0;
  cout << "Sum Even Numbers using While Statement: \n";
  while (Counter < N)
  {
    Counter++;
    if(CheckOddOrEven(Counter) == enOddOrEven::Even)
    {
      Sum +=Counter;
    }
  }
  return Sum;
}
int SumEvenFrom1toNum_UsingDoWhile(int N)
{
  int Counter =0;
  int Sum = 0;
  cout << "Sum Even Numbers using Do..While Statement: \n";
  do
  {
    Counter++;
    if(CheckOddOrEven(Counter) == enOddOrEven::Even)
    {
    Sum +=Counter;
    }
  } while (Counter < N);
  return Sum;
}
int main()
{
 int Number = ReadNumber();
 cout<<SumEvenFrom1toNum_UsingFor(Number)<<endl;
 cout<<SumEvenFrom1toNum_UsingDoWhile(Number)<<endl;
 cout<<SumEvenFrom1toNum_UsingWhile(Number)<<endl;
}
