#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence   ";
    getline(cin,sentence);

    int a = sentence.length();
    int c=0,g=0;
    
    string z,f;
    for(int k = 0; k<=a;k++)
    {
        f=sentence.substr(k,1);
        if(f==" ")
        {
            g+=1;
        }
    }
    for(int k = 0; k<=a;k++)
    {
        z=sentence.substr(k,1);
        if(z=="a"||z=="A"||z=="e"||z=="E"||z=="i"||z=="I"||z=="o"||z=="O"||z=="u"||z=="U")
        {
            c+=1;
        }   
    }
    cout<<"Total Number of Vowels are "<<c <<endl;
    cout<<"Total Number of Consonants are "<<(a-g-c)<<endl;
    cout<<"Total Number of Space are "<<(g)<<endl;
    cout<<"Total Number of Words are "<<(g+1)<<endl;

}
