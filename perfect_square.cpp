#include<iostream>
using namespace std;
int main()
{
    int n,sq;
    cout<<"Enter a Number   ";
    cin>>n;
    for(int k = 1; k<=(n/2);k++)
    {
        if(k*k==n)
        {
            sq=k;
            break;}
    }
    if(sq>n)
    {
        cout<<n<<" is not perfect square";
    }
    else if(sq!=0)
    {
        cout<<n<<" is a perfect square of "<<sq;
    }
      
}