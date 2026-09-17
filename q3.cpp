#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, g, result;

    cout << "Enter values of a, b, c, d, e, f, g: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    result = (a + b / c * d - e) * (f - g);

    cout << "Result = " << result << endl;

    return 0;
}
