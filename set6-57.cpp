#include <iostream>

using namespace std;

int main()
{
    int a,b,temp;;
    cout<<"ENTER TWO NUMBER :";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    
    return 0;
}
