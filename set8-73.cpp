#include <iostream>
using namespace std;
int main()
{
    int n,num1,num2,set = 0;
    cin>>n;
    cout<<"Enter the Range :";
    cin>>num1>>num2;
    for(int i = num1;i <= num2; i++)
    {
        if(i == n)
        {
            set = 1;
            break;
        }
    }
    if(set == 0){
        cout<<"No";
    } else {
        cout<<"Yes";
    }
    
    return 0;
}
