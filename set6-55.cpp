#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"ENTER THE NUMBER :"<<endl;
    cin>>a>>b;
    a = a * b;
    if(a % 2 == 0){
        cout<<"Its a even number";
    }else{
        cout<<"Its a odd number";
    }

    return 0;
}
