#include<iostream>
using namespace std;

int* func();
void test();
int main() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;·Ç·¨²Ù×÷
	test();

	system("pause");
	return 0;
}

int* func()
{
	int* p = new int(10);
	return p;
}
void test()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	
	delete[] arr;
}