#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
  int n;
  int set = 1,res;
 
  cout << "ENTER THE POSITIVE NUMBER: "; 
  cin >> n;
 res=sqrt(n);
 cout<<res;
  for(int i = 2; i <= res; ++i)
  {
      if(n % i == 0)
      {
          set = 0;
          break;
      }
  }
  if (set == 1)
      cout <<" YES";
  else
      cout <<" NO";
 
  return 0;
}
