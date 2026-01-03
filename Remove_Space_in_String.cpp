#include<iostream>
#include<string>
using namespace std;
int main()
{
    string string, z,rem;
    cout<<"Enter a string   ";
    getline(cin,string);
    int a = string.length();
    
    for(int k = 0; k<=a;k++)
    {
        z=string.substr(k,1);
        if(z==" ")
        {
            
        }
        else
        {
            rem=rem+z;
        }
    }
    cout<<"After removing space "<<string<<" is "<<rem;
}