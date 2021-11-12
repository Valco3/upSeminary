#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int  visitors;
    double price, discount=0;
    cin>>price>>visitors;
    if(5<=visitors<=10)discount=0.05;
    if(visitors>10&&visitors<=20)discount=0.1;
    if(visitors>=21)discount=0.15;
    price=price-price*discount;
    cout<<price*visitors;
    
    return 0;
}
