#include <iostream>
using namespace std;

int main()
{
    // Triangle type checker program
    int a,b,c;
    string result = "";
    cout << "----------What is your Triangle?----------\n";
    cout << "Please enter your first number : ";
    cin >> a;
    cout << "Please enter your second number : ";
    cin >> b;
    cout << "Please enter your third number : ";
    cin >> c;

    if(a == b && b == c) result = "You are equilateral!";
    else if(a == b || a == c || b == c) result = "You are isosceles!";
    else result = "You are scalene!";

    cout << result;
    system("pause>0");
}