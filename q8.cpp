#include <iostream>
using namespace std;

int main() {
    int num, original, digit, sum = 0;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Please enter a 3-digit number." << endl;
        return 0;
    }

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}

