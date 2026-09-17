#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the number ";
	cin>>a>>b;
	while(b!=0){
		int carry= a&b;
		a=a^b;
		b=carry<<1;
	} cout<<"sum= "<<a;
	return 0;
}
