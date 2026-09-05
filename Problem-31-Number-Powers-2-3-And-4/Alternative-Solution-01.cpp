int ReadNumber() {
int N;
cout << "please Enter a Number : ";
cin >> N;
return N;
}
int PowOf2(int N) {
int F = 1;
for (int i = 1; i <= 2; i++) {
F = F * N;
}
return F;
}
int PowOf3(int N) {
int F = 1;
for (int i = 1; i <= 3; i++) {
F = F * N;
}
return F;
}
int PowOf4(int N) {
int F = 1;
for (int i = 1; i <= 4; i++) {
F = F * N;
}
return F;
}
int main()
{
int N = ReadNumber();
cout << PowOf2(N) <<endl;
cout << PowOf3(N) <<endl;
cout << PowOf4(N) <<endl;
}
