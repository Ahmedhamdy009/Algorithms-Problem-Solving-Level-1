#include <iostream>
#include <cmath>
using namespace std;
void Readtriangle(double& a,double& b,double& c)
{
 cout << "Pleas enter triangle a ? \n";
 cin >> a;
 cout << "Pleas enter triangle b ? \n";
 cin >> b;
 cout << "Pleas enter triangle c ? \n";
 cin >> c;
}
double CircleAreaByTriangle(double a,double b,double c)
{
  const double pi = 3.14;
  double p = (a + b + c)/2;
  double T;
  T = (a*b*c) /(4 * sqrt(p*(p-a)*(p-b)*(p-c))) ;
  double Area =pi * pow(T,2);
  return Area;
}
void PrintArea (double Area)
{
    cout<<"The Area is = "<<Area <<endl;
}
int main()
{
    double a,b,c;
    Readtriangle(a,b,c);
 PrintArea(CircleAreaByTriangle(a,b,c));
}
