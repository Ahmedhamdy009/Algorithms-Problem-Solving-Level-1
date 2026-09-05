#include <iostream>
using namespace std;
struct StInfo
{
    string FirstName;
    string LastName;

};
StInfo ReadInfo()
{
    StInfo Info;
    cout<<"Enter the First Name \n";
    cin>>Info.FirstName;
    cout<<"Enter the Last Name \n";
    cin>>Info.LastName;
    
    return Info;
}
string GetFullName(StInfo Info, bool Reversed)
{
    string FullName="";
    if(Reversed)
    FullName = Info.LastName + " " + Info.FirstName;
    else
    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}
void PrintFullName(string FullName)
{
cout<<"Your Full name is: "<<FullName<<endl;
}
int main() 
{
    //كدا هيطبع الاسم معكوس 
    PrintFullName(GetFullName(ReadInfo(),true));
    //كدا هيطبع الاسم عادي
    // PrintFullName(GetFullName(ReadInfo(),false));
    return 0;
}
