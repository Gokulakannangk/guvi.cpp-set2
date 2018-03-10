#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"ENTER THE NUMBER 1:";
    cin>>a;
    cout<<ENTER THE NUMBER 2:";
    cin>>b;
    cout<<"Swapping..."<<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<a<<" "<<b;
    return 0;
}
