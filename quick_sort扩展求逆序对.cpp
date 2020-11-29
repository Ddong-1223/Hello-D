#include<iostream>
using namespace std;

const int N = 1e6 + 10;
int n;
int q[N],tmp[N];
long long result;

void merge_sort(int q[], int left, int right);

int main(){
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	merge_sort(q, 0, n - 1);
	cout << result << endl;
	system("pause");
	return 0;
}
void merge_sort(int q[], int left, int right)
{
	if (left >= right) return;
	int mid = left + right >> 1;
	merge_sort(q, left, mid), merge_sort(q, mid + 1, right);
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right) {
		if (q[i] <= q[j]) tmp[k++] = q[i++];
		else {
			tmp[k++] = q[j++];
			result += mid - i + 1;//归并排序加此句，求数列中逆序对
			//逆序对即为当i<j时，q[i]>q[j]
		}
	}
	while (i <= mid) tmp[k++] = q[i++];
	while (j <= right) tmp[k++] = q[j++];
	for (i = left, j = 0; i <= right; i++, j++) {
		q[i] = tmp[j];
	}
}