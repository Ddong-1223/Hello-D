#include<iostream>
using namespace std;

void swap(int* p1, int* p2);

int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;
	
	system("pause");
	return 0;
}
void swap(int* p1, int* p2)//µØÖ·´«µÝ
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}