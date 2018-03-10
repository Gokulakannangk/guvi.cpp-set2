#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"ENTER THE NUMBER 1:";
    cin>>a;
    cout<<" ENTER THE NUMBE 2:";
    cin>>b;
    cout<<"Swapping..."<<endl;
    temp = a;
    a = b;
    b =temp;
    cout<<a<<" "<<b;
    return 0;
}
