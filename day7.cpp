#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int* p;
	p = &a;//ָ�뼴Ϊһ����ַ
	cout << "a��ַΪ " << p << endl;
	cout << "aΪ " << *p << endl;
	cout << "ָ��p��ռ�ֽڴ�С" << sizeof(p) << endl;
	cout << "ָ��p��ռ�ֽڴ�С" << sizeof(int *) << endl;

	system("pause");
	return 0;
}