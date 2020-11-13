#include<iostream>
using namespace std;

int main() {
	int a;
	const int* p = &a;//常量指针，指向可以修改，指向的值不可更改
	int b;
	int* const q = &b;//指针常量，指向不可更改，指向的值可以修改
	int c;
	const int* const m = &c;//此时指向以及指向的值均无法修改

	system("pause");
	return 0;
}