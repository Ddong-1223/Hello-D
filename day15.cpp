#include<iostream>
using namespace std;

int& test01();
int& test02();

int main() {
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;//���þֲ�����Ϊ�Ƿ�����
	int& ref2 = test02();
	cout << ref2 << endl;
	cout << ref2 << endl;
	test02() = 100;
	cout << ref2 << endl;
	cout << ref2 << endl;
	system("pause");
	return 0;
}
int& test01()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 20;//��̬�����������ȫ����
	return a;
}