#include <iostream>
#include <cmath>
using namespace std;
double ReadDiamete(double A)
{
 cout << "Pleas enter Radious R ? \n";
 cin >> A;
 return A;
}
double CircleArea(double A)
{
  const double pi = 3.14;
  double Area =  pi * pow(A/2,2) ;
  return Area;
}
void PrintArea (double Area)
{
    cout<<"The Area is = "<<Area <<endl;
}
int main()
{
    double A;
 PrintArea(CircleArea(ReadDiamete(A)));
}
