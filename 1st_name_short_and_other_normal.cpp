#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,z;
    cout<<"Enter a name   ";
    getline(cin,name);

    int a = name.length(),s;
    
    cout<<name.substr(0,1)<<".";

    for(int k=1;k<=a;k++)
    {
        z=name.substr(k,1);
        if(z==" ")
        {
            s=k;
        }
    }

        cout<<name.substr(s,a)<<s;
}
