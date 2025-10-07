#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    if (password == "25Storrm") {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied." << endl;
    }

    string birthcode;
    cout << "enter birth code" << endl;
    cin >> birthcode;
    if (birthcode == "15/8/14") {
        cout << "Access granted." << endl;
    } else {
        cout << "Access denied." << endl;
    }

    string embriocode;
    cout << "enter embrio code" << endl;
    cin >> embriocode;
    if (embriocode == "15.8.qhs") {
        cout << "Access granted." << endl;
    } else {
        cout << "to enter this account enter final password" << endl;
    }

    string finalcode;
    cout << "enter this final password" << endl;
    cin >> finalcode;
    if (finalcode == "cyclone") {
        cout << "Access granted." << endl;
    } else {
        cout << "To access this account please go to settings and reset password." << endl;
    }
}
  


    



