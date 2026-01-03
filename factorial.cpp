#include<iostream>
using namespace std;
int main()
{
    int n, s=1;
    cout<<"Enter a Number   ";
    cin>>n;

    for(int k=1; k<=n;k++)
    {
        s*=k;
    }
    cout<<"Factorial of "<<n<<" is "<<s;
}