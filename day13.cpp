#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;//���ã������Ϊ����
	cout << a << endl;
	cout << b << endl;
	b = 20;
	cout << a << endl;
	cout << b << endl;
	system("pause");
	return 0;
}