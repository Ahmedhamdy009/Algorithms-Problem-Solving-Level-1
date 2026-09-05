#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(double& a,double& h)
{
 cout << "Pleas enter Number 1 ? \n";
 cin >> a;
 cout << "Pleas enter Number 2 ? \n";
 cin >> h;
}
double TriangleArea(double a, double h)
{
  return (a/2) * h;
}
void PrintArea (double TriangleArea)
{
    cout<<"The Triangle Area is = "<<TriangleArea <<endl;

}
int main()
{
 double a,h ;
 ReadNumbers(a,h);
 PrintArea(TriangleArea(a,h));
}
