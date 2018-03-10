#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    cout<<"ENTER THE STARTING NUMBER "<<endl;
    cin>>i;
    cout<<"ENTER THE ENDING NUMBER"<<endl;
    cin>>j;
    cout<<"The odd numbers between "<<i<<" and "<<j<<" are..."<<endl;
    for(k = i+1;k < j;k++){
        if(k%2 != 0){
            cout<<k<<" ";
        }
    }
    return 0;
}
