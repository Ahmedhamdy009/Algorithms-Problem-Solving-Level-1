#include <iostream>
using namespace std;
struct StInfo
{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};
StInfo ReadInfo()
{
    StInfo Info;
    cout<<"Enter the Age \n";
    cin>>Info.Age;
    cout << "Do you have a driver license? (1 for Yes, 0 for No): ";
    cin >> Info.HasDriverLicense;
    cout << "Do you have Recommendation? (1 for Yes, 0 for No): ";
    cin >> Info.HasRecommendation;
    return Info;
}
bool IsAccepted(StInfo info)
{
 return (info.HasRecommendation || (info.Age > 21 && info.HasDriverLicense));

}
void PrintResult(StInfo info)
{
    if(IsAccepted (info))
    cout<<" Hired "<<endl;
    else
    cout<<" Rejected "<<endl;
}
int main() 
{
    PrintResult(ReadInfo());
    return 0;
}
