#include <iostream>
using namespace std;
struct stMoney {
    int penny, Nickel, Dime, Quarter, Dollar;
};
stMoney ReadMoney() {
    stMoney Mony;
    cout << "please enter your penny : ";
    cin >> Mony.penny;
    cout << "please enter your Nickel : ";
    cin >> Mony.Nickel;
    cout << "please enter your Dime : ";
    cin >> Mony.Dime;
    cout << "please enter your Quarter : ";
    cin >> Mony.Quarter;
    cout << "please enter your Dollar : ";
    cin >> Mony.Dollar;
    return Mony;
}
int CalculateTotalOfPennies(stMoney Mony) {
    int TotalOfPennies = 0;
    TotalOfPennies = Mony.penny + Mony.Nickel * 5 + Mony.Dime * 10 + Mony.Quarter * 25 + Mony.Dollar * 100;
    return TotalOfPennies;
}
int main() {
    int TotalOfPennies = CalculateTotalOfPennies(ReadMoney());
    cout << "total of Pennies is : " << TotalOfPennies << endl;
    cout << "total of Dollars is : " << (float)TotalOfPennies / 100 << endl;
    return 0;
}
