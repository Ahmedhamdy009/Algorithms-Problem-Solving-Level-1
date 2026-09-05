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
    for(int i=1;i<=N;i++)
    {
    cout<< i<<endl;
    }
}
void PrintRangeFrom1toNum_UsingWhile(int N)
{
  int Counter = 0;
  cout<<"Range Printed using While Statement: \n";
  while (Counter < N)
  {
    Counter++;
    cout<<Counter<<endl;
  }
}
void PrintRangeFrom1toNum_UsingDoWhile(int N)
{
  int Counter = 0;
  cout<<"Range Printed using Do..While Statement: \n";
    do
    {
      Counter++;
      cout<<Counter<<endl;
    } while (Counter < N);
}
int main()
{
 int N = ReadNumber();
 PrintRangeFrom1toNum_UsingFor(N);
 PrintRangeFrom1toNum_UsingWhile(N);
 PrintRangeFrom1toNum_UsingDoWhile(N);
}
