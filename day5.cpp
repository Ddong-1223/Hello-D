#include<iostream>
#include<string>
using namespace std;

int main() {
	bool flag = true;
	//�������ͣ�ֻ��true��false��������
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	cout << "����������ռ�ڴ�ռ�" << sizeof(bool) << endl;

	int a;
	cout << "����a��ֵ" << endl;
	cin >> a;
	cout << "a��ֵΪ" << a << endl;
	string str;
	cout << "�����ַ���" << endl;
	cin >> str;
	cout << "�ַ���chrΪ" << str << endl;
	system("pause");
	return 0;
}