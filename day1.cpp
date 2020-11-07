#include<iostream>
using namespace std;
#define day 7

int main() {
	cout << "hello world" << endl;
	int a = 10;
	cout << "a=" << a << endl;
	cout << day << endl;
	const int month = 12;//coust修饰一个变量则变为常量
	cout << "一年中有" << month << "个月" << endl;
	short num1 = 32768;//short：-32768——32767；
	cout << "sum1= " << num1 << endl;

	system("pause");//防止编译运行的窗口一闪而过
	return 0;
}