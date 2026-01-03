#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    cout<<"Enter a word   ";
    cin>>word;

    int a = word.length();
    cout<<"There are "<<a<<" letters in "<<word;
}