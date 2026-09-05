#include <iostream>
using namespace std;
enum enPassFail {Pass = 1 , Fail = 2};
int ReadMark()
{
    int Mark;
    cout<<"Please Enter Your Mark: \n";
    cin>>Mark;
    return Mark;
}
enPassFail CheckMark(int Mark)
{
    if (Mark >=50)
    return enPassFail::Pass;
    else
    return enPassFail::Fail;

}
void PrintResult(enPassFail Mark)
{
    if(Mark == enPassFail::Pass)
    cout<<"Pass"<<endl;
    else 
    cout<<"Fail"<<endl;
}
int main() 
{
    PrintResult(CheckMark(ReadMark()));
    return 0;
}
