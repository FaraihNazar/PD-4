#include <iostream>
using namespace std;
void longestDuration(int h,int m);
int main()
{
int hours,mins;
cout<<"Enter the number of hours: ";
cin>>hours;
cout<<"Enter the number of minutes: ";
cin>>mins;
longestDuration(hours,mins);
}
void longestDuration(int h,int m)
{
if( h*60>m)
{
cout<<h;
}
if( m>h*60)
{
cout<<m;
}
}
