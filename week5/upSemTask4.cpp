#include<iostream>
using namespace std;

double min(int n, int m, int x);
double pow(int y, int z);
bool isLetter(int a);

int main()
{
    int n,m,x;
    cout<<"Input variables for min(n,m,x):"<<endl;
    cin>>n>>m>>x;
    cout<<min(n,m,x)<<endl;

    int y,z;
    cout<<"Input variables for pow(y,z)"<<endl;
    cin>>y>>z;
    cout<<pow(y,z)<<endl;
    

    char a;
    cout<<"Input variable for isLetter(a)"<<endl;
    cin>>a;
    cout<<boolalpha<<isLetter(a);
    return 0;
}

double min(int n, int m, int x)
{
    int min=n;
    if(n>m&&x>m)min=m;
    if(n>x&&m>x)min=x;
    return min;
}
double pow(int y, int z)
{
    double sum=1;
    for(int i=z;i>0;i--)
    {
       sum*=y;
    }
   return sum;
}
bool isLetter(int a)
{
    if((a>64&&a<91)||(a>96&&a<123))return true;
    else return false;
}