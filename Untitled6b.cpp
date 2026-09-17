// using witch case
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int ascii = ch;

    switch (ascii) {
        case 65 ... 90:
            cout << "Capital letter";
            break;

        case 97 ... 122:
            cout << "Small case letter";
            break;

        case 48 ... 57:
            cout << "Digit";
            break;

        default:
            cout << "Special symbol";
    }

    cout << endl;

    return 0;
}
