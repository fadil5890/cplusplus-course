#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    // prime number checker program
    int number;
    cout << "Please enter a number : ";
    cin >> number;
    string result = to_string(number) + " is a prime";
    if(number == 2) cout << result;
    if(number < 2 || number >= 3 && number % 2 == 0) result = to_string(number) + " is not a prime";
    for(int i = 3; i <= floor(sqrt(number)); i+=2)
    {
        if(number % i == 0) result = to_string(number) + " is not a prime";
    }
    cout << result;
    system("pause>0");
}