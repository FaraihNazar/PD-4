#include <iostream>
using namespace std;
void Reverse(string TrueFalse);
int main()
{
string tf;
cout<<"Enter 'true' or 'false': ";
cin>>tf;
Reverse(tf);
}
void Reverse(string TrueFalse)
{
if (TrueFalse=="true")
{
cout<<"false";
}
if (TrueFalse=="false")
{
cout<<"true";
}
}