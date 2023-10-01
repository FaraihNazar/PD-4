#include <iostream>
using namespace std;
void checkSpeed(float x);
int main()
{
float speed;
cout<<"Speed: ";
cin>>speed;
checkSpeed(speed);
}
void checkSpeed(float x)
{
if (x<=100)
{
cout<<"Perfect! You're going good.";
}
if (x>100)
{
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
}
}