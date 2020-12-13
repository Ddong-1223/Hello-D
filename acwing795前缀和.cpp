#include<iostream>
#include<cstdio>
using namespace std;

const int N = 1e6 + 10;
int a[N], q[N];

int main() {
	int n, m;
	int l, r;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		q[i] = q[i - 1] + a[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> l >> r;
		printf("%d\n", q[r] - q[l - 1]);
	}
	system("pause");
	return 0;
}