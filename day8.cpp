#include<iostream>
using namespace std;

int main() {
	int a;
	const int* p = &a;//����ָ�룬ָ������޸ģ�ָ���ֵ���ɸ���
	int b;
	int* const q = &b;//ָ�볣����ָ�򲻿ɸ��ģ�ָ���ֵ�����޸�
	int c;
	const int* const m = &c;//��ʱָ���Լ�ָ���ֵ���޷��޸�

	system("pause");
	return 0;
}