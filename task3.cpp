#include<iostream>
using namespace std;
bool willHeLikeTheCar(bool isFirstHand, 
                      bool hasAC, 
                      int roadPassed, 
                      int horsePowers, 
                      int price);
int main()
{
    bool isFirstHand, hasAC;
    int roadPassed=0, horsePowers, price;
    cout<<"Is the car new ? (1/0) ";
    cin>>isFirstHand;
    if(!isFirstHand)
    {
        cout<<"Road passed: ";
        cin>>roadPassed;
    }
    cout<<"Does the car have an AC(1/0) ";
    cin>>hasAC;
    cout<<"How many horse powers does the car have? :";
    cin>>horsePowers;
    cout<<"How much does the car cost? :";
    cin>>price; 
    if(willHeLikeTheCar(isFirstHand, hasAC, roadPassed, horsePowers, price))cout<<"Yes";
        else cout<<"No";
}
bool willHeLikeTheCar(bool isFirstHand, 
                      bool hasAC, 
                      int roadPassed, 
                      int horsePowers, 
                      int price)
{
    if(!isFirstHand)
    {
        if(hasAC)
        {
            if((roadPassed<115000)&&horsePowers>=70&&price<=6000)return true;
        }
        else if((roadPassed<18000)&&horsePowers>=60&&price<=2000)return true;
        else return false;
    }
    else if((70<=horsePowers<=90)&&price<=25000)return true;
    else return false;
}