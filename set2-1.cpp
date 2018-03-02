#include <iostream>
using namespace std;

int main() 
{
    int Exponent;
    float Base, result = 1;

    cout << "Enter Base and Exponent respectively:  ";
    cin >> Base >> Exponent;

    cout << Base << "^" << Exponent << " = ";

    while (Exponent != 0) {
        result *= Base;
        --Exponent;
    }

    cout << result;
    
    return 0;
}
