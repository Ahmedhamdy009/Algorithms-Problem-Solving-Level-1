#include <iostream>
using namespace std;
int main()
{
    int Pin;
    cout<<"Please Enter PIN: \n";
    cin>>Pin;
    if (Pin ==1234 )
    {
        cout << "Your Balance is: 7500";
    }
    else
    {
        cout << "Wrong PIN";
    }
    return 0;
}
