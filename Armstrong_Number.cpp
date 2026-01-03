#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number   ";
    cin>>a;
    int s=a;
    int r, b=0;
    while(s!=0)
    {
        r=s%10;
        b=b+r*r*r;
        s=s/10;
    }
    if(a==b)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not Armstrong Number";
    }
    return 0;
}