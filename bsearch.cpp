#include<iostream>
using namespace std;

const int N = 1e6 + 10;
int n, m;
int q[N];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	while (m--) {
		int x;
		cin >> x;
		int left = 0, right = n - 1;
		while (left < right) {
			int mid = left + right >> 1;
			if (q[mid] >= x) right = mid;
			else left = mid + 1;
		}//��߽�
		if (q[left] != x) cout << "-1 -1" << endl;
		//�ж����ֵ�����ϣ����޽�������-1 -1
		else {
			cout << left << ' ';

			int left = 0, right = n - 1;
			while (left < right) {
				int mid = left + right +1 >> 1;
				if (q[mid] <= x) left = mid;
				else right = mid - 1;
			}
			cout << left << endl;
		}//�ұ߽�
	}
	system("pause");
	return 0;
}












//ģ��
//bool check(int x)
//
//int bsearch_1(int left, int right)
//{
//	while (left < right) {
//		int mid = left + right >> 1;
//		if (check(mid)) right = mid;
//		else left = mid + 1;
//	}
//	return left;
//}
//
//int bsearch_2(int left, int right)
//{
//	while (left < right) {
//		int mid = left + right + 1 >> 1;
//		if (check(mid)) left = mid;
//		else right = mid - 1;
//	}
//	return left;
//}
