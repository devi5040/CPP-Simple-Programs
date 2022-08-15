#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Math functions
    cout << pow(2, 5) << endl;   // power function
    cout << sqrt(36) << endl;    // function to find square root
    cout << round(4.2) << endl;  // rouns up the number according to the rounding rule
    cout << ceil(4.1) << endl;   // rounds up the number to the next higher whole number
    cout << floor(4.9) << endl;  // rounds up the number to the previous whole number
    cout << fmax(3, 52) << endl; // returns the maximum of 2 numbers
    cout << fmin(10, 22);        // returns the minimum of 2 numbers
    return 0;
}