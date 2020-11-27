#include<iostream>
using namespace std;

const int N = 1e6 + 10;
int n;
int q[N];
int tmp[N];

void merge_sort(int q[], int left, int right);

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	merge_sort(q, 0, n - 1);
	for (int i = 0; i < n; i++) {
		printf("%d ", q[i]);
	}
	system("pause");
	return 0;
}
void merge_sort(int q[], int left, int right)
{
	if (left >= right) return;
	int mid = (left + right) / 2;
	//Ò²¿Éint mid = left + right >> 1;
	merge_sort(q, left, mid), merge_sort(q, mid + 1, right);
	int k = 0, i = left, j = mid + 1;
	while (i <= mid && j <= right) {
		if (q[i] <= q[j]) tmp[k++] = q[i++];
		else tmp[k++] = q[j++];
	}
	while (i <= mid) tmp[k++] = q[i++];
	while (j <= right) tmp[k++] = q[j++];
	for (i = left,j=0; i <= right; i++,j++) {
		q[i] = tmp[j];
	}
}