#include<iostream>
using namespace std;

void mySwap01(int a, int b);//ֵ����
void mySwap02(int* a, int* b);//��ַ����
void mySwap03(int& a, int& b);//���ô���
int main() {
	int a = 10;
	int b = 20;

	mySwap01(a, b);
	cout << a << endl;
	cout << b << endl;

	mySwap02(&a, &b);
	cout << a << endl;
	cout << b << endl;

	mySwap03(a, b);
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}