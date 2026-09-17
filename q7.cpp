#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *p;

    cout << "Enter 5 elements: ";

    p = arr;

    for (int i = 0; i < 5; i++) {
        cin >> *p;
        p++;
    }

    cout << "Array elements are: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
