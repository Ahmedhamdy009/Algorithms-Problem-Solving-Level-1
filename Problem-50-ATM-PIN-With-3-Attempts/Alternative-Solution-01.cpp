#include <iostream>
#include <string>
using namespace std;
string ReadPinCode() {
string PinCode;
cout << "please enter your pin Code : ";
cin >> PinCode;
return PinCode;
}
bool Login() {
string PinCode;
int counter = 3;
do
{
PinCode = ReadPinCode();
counter--;
if (PinCode == "1234") return 1;
else cout << "\nWrong Pin you have " << counter << " other tries !" << endl;
} while (counter >= 1 && PinCode != "1234");
return 0;
}
int main()
{
if (Login()) cout << "your Balance is " << 7500;
else cout << "your Card is Blocked !! " << endl;
return 0;
}
