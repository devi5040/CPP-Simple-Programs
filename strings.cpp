#include <iostream>
using namespace std;
int main()
{
    string a = "Good Morning";
    cout << "Hello\n";
    cout << a << endl;
    cout << "---------------------------------------------------" << endl;
    // Accessing single elements
    cout << a[0] << endl; // Accessing first element
    cout << a[3] << endl; // Accessing fourth element
    cout << "---------------------------------------------------" << endl;
    // Modifying a specific character in a string
    a[0] = 'H'; // changing letter G to H
    cout << a << endl;
    cout << "---------------------------------------------------" << endl;
    // String Functions
    cout << a.length() << endl; // length function :- length of string a
    cout << "---------------------------------------------------" << endl;
    // find function
    cout << a.find("Mo", 0) << endl; // find("a",n); where a:- string we have to find. n:- from which index the function should check for the given a string
    cout << "---------------------------------------------------" << endl;
    // substring function
    cout << a.substr(5, 5) << endl; // substr(m,n); where m:- index no. of character from which the substring should start. n:- length of the substring.
    return 0;
}