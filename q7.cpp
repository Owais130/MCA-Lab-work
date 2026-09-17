#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double D, r1, r2;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 0;
    }

    D = b * b - 4 * a * c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);

        cout << "Two distinct real roots:" << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if (D== 0) {
        r1 = -b / (2 * a);

        cout << "Two equal real roots:" << endl;
        cout << "Root 1 = Root 2 = " << r1 << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);

        cout << "Complex roots:" << endl;
        cout << "Root 1 = " << realPart << " + "
             << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - "
             << imaginaryPart << "i" << endl;
    }

    return 0;
}
