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
do
{
PinCode = ReadPinCode();
if (PinCode == "1234") return 1;
else cout << "Wrong Pin " << endl;
} while (PinCode != "1234");
return 0;
}
int main()
{
if (Login()) cout << "your Balance is " << 7500;
return 0;
}
