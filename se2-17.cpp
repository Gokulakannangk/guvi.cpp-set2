#include <iostream>
using namespace std;

int main()
{
  int origNum,digit, num, rem, sum = 0;
  cout << "enter a positive  integer: ";
  cin >> origNum;

  num = origNum;

  while(num != 0)
  {
      digit = num % 10;
      sum += digit * digit * digit;
      num /= 10;
  }

  if(sum == origNum)
    cout << origNum << " yes.";
  else
    cout << origNum << " no.";

  return 0;
}
