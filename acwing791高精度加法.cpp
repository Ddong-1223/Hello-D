#include<iostream>
#include<vector>
using namespace std;

vector<int> add(vector<int>& A, vector<int>& B);

int main() {
	string a, b;
	cin >> a >> b;
	vector<int> A, B;
	for (int i = a.size()-1; i >= 0; i--) A.push_back(a[i] - '0');
	for (int i = b.size()-1; i >= 0; i--) B.push_back(b[i] - '0');
	auto C = add(A, B);
	for (int i = C.size()-1; i >= 0; i--) printf("%d", C[i]);

	system("pause");
	return 0;
}
vector<int> add(vector<int>& A, vector<int>& B)
{
	vector<int> C;
	int t = 0;//�����Ƿ��λ
	for (int i = 0; i < A.size() || i < B.size(); i++) {
		if (i < A.size()) t += A[i];
		if (i < B.size()) t += B[i];
		C.push_back(t % 10);
		t /= 10;
	}
	if (t != 0) C.push_back(1);
	return C;
}