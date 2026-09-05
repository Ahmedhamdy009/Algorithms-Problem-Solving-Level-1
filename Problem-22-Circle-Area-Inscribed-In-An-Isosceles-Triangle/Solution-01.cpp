#include <iostream>
#include <cmath>
using namespace std;
void Readtriangle(double& a,double& b)
{
 cout << "Pleas enter triangle a ? \n";
 cin >> a;
 cout << "Pleas enter triangle b ? \n";
 cin >> b;
}
double CircleArea(double a,double b)
{
  const double pi = 3.14;
  double Area =  pi * (pow(b,2)/4) * ((2*a-b)/(2*a+b)) ;
  return Area;
}
void PrintArea (double Area)
{
    cout<<"The Area is = "<<Area <<endl;
}
int main()
{
    double a,b;
    Readtriangle(a,b);
 PrintArea(CircleArea(a,b));
}
