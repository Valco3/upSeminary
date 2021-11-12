#include<iostream>
using namespace std;
int main()
{
    //5-13 3-7 7-19
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cout<<" ";
    }
    for(int i=0;i<n*2;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    for(int i=n-2;i>0;i--)
    {
        int m=i,y=n-i-2,z=0,g=i-1;
        while(m!=0)
        {
            cout<<" ";
            m--;
        }
        cout<<"*";
        while(y!=0)
        {
            cout<<" ";
            y--;
        }
        cout<<"*";
        for(int i=0;i<n*2+(n-2);i++)
        {
            cout<<" ";
        }
        cout<<"*";
        while(g!=0)
        {
            cout<<" ";
            g--;
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n*2;i++)
    {
        cout<<"* ";
    }
}