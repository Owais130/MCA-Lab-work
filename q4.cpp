#include <iostream>
using namespace std;

int main() {
    int num;
    int *p;

    cout << "Enter a number: ";
    cin >> num;
    p=&num;
    cout<<"original ="<<*p<<endl;
    (*p)++;
    cout<<"valueafter incremnt"<<*p<<endl;
    (*p)--;
	cout<<"value after decrement"<<*p<<endl;
	return 0;
}
