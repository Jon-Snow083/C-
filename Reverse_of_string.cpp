#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    cout<<"Enter a word   ";
    cin>>word;

    int a = word.length();

    string z,rev;
    for(int k = a; k>=0;k--)
    {
        z=word.substr(k,1);
        rev=rev+z;
    }
    cout<<"Reverse of "<<word<<" is "<<rev;
}