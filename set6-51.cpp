#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    cout<<"ENTER THE NUMBER ";
    cin>>i;
    string str = to_string(i);
    for(i = 0;i < str.length();i++){
        cout<<str[i]<<" ";
    }
    return 0;
}
