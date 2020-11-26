#include<iostream>
using namespace std;

const int N = 1e6+10;
int n;
int q[N];

void quick_sort(int q[], int left, int right);
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	quick_sort(q, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d ", q[i]);
	}
	system("pause");
	return 0;
}
void quick_sort(int q[], int left, int right)
{
	if (left >= right) return;
	int temp = q[left], i = left - 1, j = right + 1;
	while (i < j) {
		do i++; while (q[i] < temp);
		do j--; while (q[j] > temp);
		if (i < j) swap(q[i], q[j]);
	}
	quick_sort(q, left, j);
	quick_sort(q, j + 1, right);
}