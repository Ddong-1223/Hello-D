#include<iostream>
using namespace std;

void bubbleSort(int* arr, int len);
void printArray(int* arr, int len);

int main() {
	int a[10] = { 1,5,8,3,5,7,2,4,77,10 };
	int len = sizeof(a)/sizeof(a[0]);
	cout << len << endl;
	bubbleSort(a, len);
	printArray(a, len);
	system("pause");
	return 0;
}
void bubbleSort(int* arr, int len)
{
	int i,j;
	int temp;
	for (i = 0; i < len - 1; i++) {
		for (j = i + 1; j < len; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}