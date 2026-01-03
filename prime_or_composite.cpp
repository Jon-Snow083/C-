#include<iostream>
using namespace std;
int main()
{
    int n, flag;
    cout<<"Enter a number   ";
    cin>>n;

    for(int k =1;k<=n;k++)
    {
        if(n%k==0)
        {
            flag+=1;
        }
    }
    if(flag=2)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Composite Number";
    }
}