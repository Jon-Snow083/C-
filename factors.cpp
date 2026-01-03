#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number   ";
    cin>>n;

    for(int k=1; k<=n;k++)
    {
        if(n%k==0)
        {
            cout<<k<<" ";
        }
    }
}