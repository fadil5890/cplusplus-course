#include <iostream>
using namespace std;

int main()
{
    float monthlySalary;
    cout << "Please enter your monthly salary\n";
    cout << "Monthly salary : ";
    cin >> monthlySalary;
    float dailySalary = monthlySalary / 30;
    cout << "Your daily salary is " << dailySalary <<endl;
    cout << fixed <<"In a Year, you will earn :" << monthlySalary * 12;
    system("pause>0");
}