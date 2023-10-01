#include <iostream>
using namespace std;
void IsEqual(int x,int y);
int main()
{
int no1,no2;
cout<<"Enter the first number: ";
cin>>no1;
cout<<"Enter the second number: ";
cin>>no2;
IsEqual(no1,no2);
}
void IsEqual(int x,int y){
if (x==y)
{
cout<<"true";
}
if (x!=y)
{
cout<<"false";
}

}
