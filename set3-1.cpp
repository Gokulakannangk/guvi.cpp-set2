#include<iostream>
using namespace std;
int main()
{
    long d,n,a1,an;
    float sum;
   cout<<"enter value of n ";
    cin>>n;
    cout<<"enter first term ";
    cin>>a1;
    cout<<"enter difference ";
    cin>>d;
    an=a1+(n-1)*d;
    sum=n*(a1+an)/2.0;
    cout<<endl<<"Sum ="<<sum<<endl;
    return 0;
}
