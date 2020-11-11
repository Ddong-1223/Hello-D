#include<iostream>
#include<string>
using namespace std;

int main() {
	bool flag = true;
	//布尔类型，只有true、false两种类型
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "布尔类型所占内存空间" << sizeof(bool) << endl;

	int a;
	cout << "输入a的值" << endl;
	cin >> a;
	cout << "a的值为" << a << endl;
	string str;
	cout << "输入字符串" << endl;
	cin >> str;
	cout << "字符串chr为" << str << endl;
	system("pause");
	return 0;
}