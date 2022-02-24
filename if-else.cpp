#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // prime number checker program
    int number;
    int result = 1;
    cout << "Please enter a number : ";
    cin >> number;

    if(number < 2 || number >= 3 && number % 2 == 0) result = 0;
    for(int i = 3; i <= floor(sqrt(number)); i+=2)
    {
        if(number % i == 0) result = 0;
    }
    
    if(result) cout << number << " is a prime";
    else cout << number << " is not a prime";

    system("pause>0");
}