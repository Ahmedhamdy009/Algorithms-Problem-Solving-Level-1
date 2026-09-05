#include <iostream>
using namespace std;
int main()
{
    int PIN;
    int FailedCounter = 0;
    while(FailedCounter < 3)
    {
        cout << "Enter PIN: ";
        cin >> PIN;
        if(PIN == 1234)
        {
            cout << "Your Balance is: 7500" << endl;
            return 0;
        }
        else
        {
            cout << "Wrong PIN" << endl;
            FailedCounter++;
        }
    }
    cout << "Card is locked" << endl;
}
