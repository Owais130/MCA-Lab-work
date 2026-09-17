#include <iostream>
using namespace std;

int main() {
    char str1[200],str2[100];
    char *p1,*p2;

    cout << "Enter a string: 1 ";
    cin.getline(str1, 100);
    cout << "Enter a string: 2 ";
    cin.getline(str2, 100);

    p1 = str1;
    p2=str2;

    cout << "String = ";

    while (*p1 != '\0') {
        p1++;
    }
      while (*p2 != '\0') {
        *p1=*p2;
        p1++;
        p2++;
    }
	*p1='\0';
	
	cout<<"contanated ="<<str1;


    return 0;
}
