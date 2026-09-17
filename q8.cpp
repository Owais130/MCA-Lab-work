#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int arr[100];
    int *p;

    cout << "Enter number of elements: ";
    cin >> n;

    p = arr;

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> *p;
        p++;
    }

    p = arr;

    for (int i = 0; i < n; i++) {
        sum = sum + *p;
        p++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
