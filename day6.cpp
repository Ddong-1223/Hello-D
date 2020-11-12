#include<iostream>
using namespace std;

int main() {
	int a = 1,b=1,c,d;
	c = a++;//先运算a再++
	d = ++b;//先进行++再运算
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	system("pause");
	return 0;
}