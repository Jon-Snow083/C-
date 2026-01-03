#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence   ";
    getline(cin,sentence);

    int a = sentence.length();
    int c=0;
    
    string z;
    for(int k = 0; k<=a;k++)
    {
        z=sentence.substr(k,1);
        if(z==" ")
        {
            c+=1;
        }
    }
    cout<<"Total Number of Words are "<<c+1;
}