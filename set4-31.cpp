#include <iostream>
using namespace std;

int main()
{
    string str;
    int count = 0,i;
    cout << "ENTER THE SENTENCE..: ";
    getline(cin, str);
    for(i = 0;i <= str.length()-1;i++){
        if(str[i] == ' '){
            continue;
        }else{
            count++;
        }
    }
    cout<<count;
    return 0;
}
