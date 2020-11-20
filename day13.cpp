#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;//引用，可理解为别名
	cout << a << endl;
	cout << b << endl;
	b = 20;
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}