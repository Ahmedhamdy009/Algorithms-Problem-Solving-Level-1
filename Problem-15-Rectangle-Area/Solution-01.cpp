#include <iostream>
using namespace std;
void ReadNumbers(double& Num1,double& Num2)
{
 cout << "Pleas enter Number 1 ? \n";
 cin >> Num1;
 cout << "Pleas enter Number 2 ? \n";
 cin >> Num2;
}
double CalculateRectangleArea(double Num1, double Num2)
{
  return Num1 * Num2;
}
void PrintArea (int Area)
{
    cout<<"The Rectangle Area is = "<<Area <<endl;

}
int main()
{
 double Num1,Num2 ;
 ReadNumbers(Num1,Num2);
 PrintArea(CalculateRectangleArea(Num1,Num2));
}
