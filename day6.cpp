#include<iostream>
using namespace std;

int main() {
	int a = 1,b=1,c,d;
	c = a++;//������a��++
	d = ++b;//�Ƚ���++������
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	system("pause");
	return 0;
}