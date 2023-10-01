#include <iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
int main()
{
int red_rose,white_rose,tulips;
cout<<"Red Rose: ";
cin>>red_rose;
cout<<"White Rose: ";
cin>>white_rose;
cout<<"Tulips: ";
cin>>tulips;
flowerShop(red_rose,white_rose,tulips);
}
void flowerShop(int redRose,int whiteRose,int tulip)
{
float X=redRose*2.00+whiteRose*4.10+tulip*2.50;
cout<<"Original Price: $"<<X<<endl;
if (X<200)
{
cout<<"No discount applied.";
}
if (X>200)
{
cout<<"Price after Discount: $"<<X-X*0.2;
}
}