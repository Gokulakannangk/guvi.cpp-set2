#include <iostream>

using namespace std;

int main()
{
    string s;
    int i,k;
    cout<<"ENTER THE STRING :";
    cin>>s;
    cout<<"Enter num to print the first K characters:";
    cin>>k;
    for(i=0;i<k;i++)
    {
    cout<<s[i];
    }    
    }
