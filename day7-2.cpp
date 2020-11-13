#include<iostream>
using namespace std;

int main() {
	int* q = NULL;//空指针不可进行访问
	//程序中避免出现野指针，eg:int* p = (int *)0x1100;
	//空指针与野指针均无法访问

	system("pause");
	return 0;
}