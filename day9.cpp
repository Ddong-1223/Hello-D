#include<iostream>
using namespace std;

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i;
	/*cout << "第一个元素为" << *p << endl;
	p++;
	cout << "第二个元素为" << *p << endl;*/
	for (i = 0; i < 10; i++) {
		cout << *p<< endl;
		p++;

	}
	system("pause");
	return 0;
}