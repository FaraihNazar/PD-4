#include <iostream>
using namespace std;
void pet(int holidays);
main()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}
void pet(int holidays)
{
int working_days=365-holidays;
int time_for_games=working_days*63+127*holidays;
int norm=30000;
int difference=norm-time_for_games;
int hours=difference/60;
int minutes=difference % 60;
if (difference >=0)
{
cout<<"Tom sleeps well"<<endl;
cout<<hours<<" hours and "<<minutes<<" minutes less for play "<<endl;
}
if (difference<0)
{
difference=-difference;
int hours=difference/60;
int minutes=difference%60;
cout<<"Tom will run away"<<endl;
cout<< hours<<" hours and "<< minutes<<" minutes for play"<<endl;
}
}
