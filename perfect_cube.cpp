#include<iostream>
using namespace std;
int main()
{
    int n,cu;
    cout<<"Enter a Number   ";
    cin>>n;
    for(int k = 1; k<=(n/3);k++)
    {
        if(k*k*k==n)
        {
            cu=k;
            break;}
    }
    if(cu>n)
    {
        cout<<n<<" is not a perfect cube";
    }
    else if(cu!=0)
    {
        cout<<n<<" is a perfect cube of "<<cu;
    }
      
}