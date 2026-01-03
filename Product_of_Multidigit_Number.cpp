#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number  :";
    cin>>a;
    int r,s=1;
    int n=a;
    while(n!=0)
    {
        r=n%10;
        s=s*r;
        n=n/10;
    }
    cout<<"The product of "<<a<<" is "<<s;
}