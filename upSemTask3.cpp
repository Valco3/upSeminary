#include<iostream>
using namespace std;

double circle(int radius)
    {
        return radius*radius*3.14;
    }
int main()
{
    int radius;
    cin>>radius;
    cout<<circle(radius);
}