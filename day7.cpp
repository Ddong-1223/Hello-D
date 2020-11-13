#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int* p;
	p = &a;//指针即为一个地址
	cout << "a地址为 " << p << endl;
	cout << "a为 " << *p << endl;
	cout << "指针p所占字节大小" << sizeof(p) << endl;
	cout << "指针p所占字节大小" << sizeof(int *) << endl;

	system("pause");
	return 0;
}