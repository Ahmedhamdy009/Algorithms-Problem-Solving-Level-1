#include <iostream>
#include <cmath>
using namespace std;
double ReadRadious()
{
    double D;
 cout << "Pleas enter Radious R ? \n";
 cin >> D;
 return D;
}
double CircleAreaByDiameter(double D)
{
  const double pi = 3.14;
  double Area =  (pi *pow(D,2)/4) ;
  return Area;
}
void PrintArea (double Area)
{
    cout<<"The Area is = "<<Area <<endl;
}
int main()
{
 PrintArea(CircleAreaByDiameter(ReadRadious()));
}
