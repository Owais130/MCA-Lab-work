#include <iostream>
using namespace std;

int main() {
    int num;
    int *p;

    cout << "Enter a number: ";
    cin >> num;

    p = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << p << endl;

    return 0;
}
