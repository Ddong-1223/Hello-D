#include<iostream>
#include<vector>
#include<algorithm>//��׼�㷨ͷ�ļ�
using namespace std;

void test01();
void myPrint(int val);

int main() {
	test01();
	system("pause");
	return 0;
}
void test01()
{
	vector<int> v;
	//����vector����������

	v.push_back(10);
	//�������в�������
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	/*
	vector<int>::iterator itbegin = v.begin();
	//��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itend = v.end();
	//������������ָ�����������һ��Ԫ�ص���һ��λ��
	
	//��һ�ֱ�����
	while (itbegin != itend) {
		cout << *itbegin << endl;
		itbegin++;
	}
	*/

	/*
	//�ڶ��ֱ���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	*/

	//�����ֱ���
	for_each(v.begin(), v.end(), myPrint);//����STL�ṩ�����㷨

}
void myPrint(int val)
{
	cout << val << endl;
}