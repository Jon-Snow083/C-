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
        b=b*10+r;
        s=s/10;
    }
    if(a==b)
    {
        cout<<"Palindrome Number";
    }
    else
    {
        cout<<"Not Palindrome Number";
    }
    return 0;
}