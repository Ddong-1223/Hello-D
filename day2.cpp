#include<iostream>
using namespace std;

int main() {
	short num1 = 10;
	cout << "short��ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;//2�ֽ�
	cout << "short��ռ�ڴ�ռ�Ϊ�� " << sizeof(num1) << endl;
	cout << "int��ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;//4�ֽ�
	cout << "long��ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;//4�ֽ�
	cout << "long long��ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;//8�ֽ�

	float f1 = 3.14f;//��λ��Ч����
	double d1 = 3.14;//ʮ�塪ʮ��λ��Ч����
	cout << "f1= " << f1 << endl;
	cout << "d1= " << d1 << endl;
	cout << "floatռ�ÿռ��ڴ� " << sizeof(float) << endl;//4�ֽ�
	cout << "doubleռ�ÿռ��ڴ� " << sizeof(double) << endl;//8�ֽ�

	float f2 = 3e2;//3*10^2
	cout << "f2= " << f2 << endl;
	float f3 = 3e-2;//3*0.1^2
	cout << "f3= " << f3 << endl;

	char ch = 'a';//��������ֻ����һ���ַ�
	cout << ch << endl;
	cout <<"char�ַ��ͱ�����ռ�ڴ�"<< sizeof(char) << endl;
	cout << "�ַ�a����Ӧ��ASCII��ֵ " << (int)ch << endl;

	system("pause");
	return 0;
}