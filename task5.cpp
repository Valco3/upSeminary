#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int a=count;
    int variable=1;
    while(n>0)
    {
       
        
        for(int i=count;i>0;i--)
        {
        
            cout<<variable<<" ";
            n-=1;
            if(n==0)break;
        }
 
        count++;
        variable++;
        
    }
}