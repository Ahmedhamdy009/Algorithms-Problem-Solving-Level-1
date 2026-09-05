#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(double& a,double& d)
{
 cout << "Pleas enter Number 1 ? \n";
 cin >> a;
 cout << "Pleas enter Number 2 ? \n";
 cin >> d;
}
double RectangleAreaBySideAndDiagonal(double a, double d)
{
  return a *sqrt(pow(d,2)-pow(a,2)) ;
}
void PrintArea (double RecangleArea)
{
    cout<<"The Rectangle Area is = "<<RecangleArea <<endl;

}
int main()
{
 double a,d ;
 ReadNumbers(a,d);
 PrintArea(RectangleAreaBySideAndDiagonal(a,d));
}
