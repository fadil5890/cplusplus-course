#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 2002;
    char gender = 'm';
    float bodyWeight = 57.55;
    double bodyHeight = 171;

    cout << "The size of int is " << sizeof(int) << " bytes\n";
    cout << "Int min value is " << INT_MIN <<endl;
    cout << "Int max value is " << INT_MAX <<endl;
    cout << "The size of char is " << sizeof(char) << " bytes\n";
    cout << "Char min value is " << CHAR_MIN <<endl;
    cout << "Char max value is " << CHAR_MAX <<endl;
    cout << "The size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    cout << "UInt max value is " << UINT_MAX <<endl;

    cout << "The size of float is " << sizeof(float) << " bytes\n";
    cout << "The size of double is " << sizeof(double) << " bytes";

    system("pause>0");
}