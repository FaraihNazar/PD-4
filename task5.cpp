#include <iostream>
using namespace std;
void possibleBonus( int your_dice,int friend_dice);
int main()
{
int x,y;
cout<<"Enter your position: ";
cin>>x;
cout<<"Enter your friend's position: ";
cin>>y;
possibleBonus( x,y);
}
void possibleBonus( int your_dice,int friend_dice)
{

if ((your_dice+6)>=friend_dice)
{
cout<<"true";
}
if ((your_dice+6)<friend_dice)
{
cout<<"false";
}
}