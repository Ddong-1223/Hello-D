#include<iostream>
using namespace std;

int main() {
	short num1 = 10;
	cout << "short所占内存空间为： " << sizeof(short) << endl;//2字节
	cout << "short所占内存空间为： " << sizeof(num1) << endl;
	cout << "int所占内存空间为： " << sizeof(int) << endl;//4字节
	cout << "long所占内存空间为： " << sizeof(long) << endl;//4字节
	cout << "long long所占内存空间为： " << sizeof(long long) << endl;//8字节

	float f1 = 3.14f;//七位有效数字
	double d1 = 3.14;//十五—十六位有效数字
	cout << "f1= " << f1 << endl;
	cout << "d1= " << d1 << endl;
	cout << "float占用空间内存 " << sizeof(float) << endl;//4字节
	cout << "double占用空间内存 " << sizeof(double) << endl;//8字节

	float f2 = 3e2;//3*10^2
	cout << "f2= " << f2 << endl;
	float f3 = 3e-2;//3*0.1^2
	cout << "f3= " << f3 << endl;

	char ch = 'a';//单引号且只能有一个字符
	cout << ch << endl;
	cout <<"char字符型变量所占内存"<< sizeof(char) << endl;
	cout << "字符a所对应的ASCII码值 " << (int)ch << endl;

	system("pause");
	return 0;
}