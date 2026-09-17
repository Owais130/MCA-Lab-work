#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char *start, *end;
    char temp;

    cout << "Enter a string: ";
    cin >> str;

    start = str;
    end = str + strlen(str) - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed string = " << str << endl;

    return 0;
}

