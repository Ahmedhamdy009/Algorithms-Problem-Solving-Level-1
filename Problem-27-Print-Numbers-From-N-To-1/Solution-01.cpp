#include <iostream>
using namespace std;
int ReadNumber()
{
    int N;
    cout<<"Please Enter N: ";
    cin>>N;
    return N;
}
void PrintRangeFrom1toNum_UsingFor(int N)
{
    for(int i=N;i>=1;i--)
    {
    cout<< i<<endl;
    }
}
void PrintRangeFrom1toNum_UsingWhile(int N)
{
  int Counter = N + 1;
  cout<<"Range Printed using While Statement: \n";
  while (Counter > 1)
  {
    Counter--;
    cout<<Counter<<endl;
  }
}
void PrintRangeFrom1toNum_UsingDoWhile(int N)
{
  int Counter = N + 1;
  cout<<"Range Printed using Do..While Statement: \n";
    do
    {
      Counter--;
      cout<<Counter<<endl;
    } while (Counter > 1);
}
int main()
{
 int N = ReadNumber();
 PrintRangeFrom1toNum_UsingFor(N);
 PrintRangeFrom1toNum_UsingWhile(N);
 PrintRangeFrom1toNum_UsingDoWhile(N);
}
