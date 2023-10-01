#include <iostream>
using namespace std;
void Discount(string x,float y);
int main()
{
string country;
float price;
cout<<"Enter the country's name: ";
cin>>country;
cout<<"Enter the ticket price in dollars: $";
cin>>price;
Discount(country,price);
}
void Discount(string x,float y)
{
if (x=="Pakistan")
{
y=y-y*0.05;
cout<<"Final ticket price after discount: $"<<y;
}
if (x=="Ireland")
{
y=y-y*0.1;
cout<<"Final ticket price after discount: $"<<y;
}
if (x=="India")
{
y=y-y*0.2;
cout<<"Final ticket price after discount: $"<<y;
}
if (x=="England")
{
y=y-y*0.3;
cout<<"Final ticket price after discount: $"<<y;
}
if (x=="Canada")
{
y=y-y*0.45;
cout<<"Final ticket price after discount: $"<<y;
}
}