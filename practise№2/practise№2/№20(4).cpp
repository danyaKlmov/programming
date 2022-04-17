#include<iostream>

using namespace std;

void read_array1(int* array, int size);
int count_multiple_4(int* array, int size, int t);

int main() {
	int n, t;
	cin >> n >> t;
	int* A = new int[n];
	int* B = new int[n];
	read_array1(A, n);
	read_array1(B, n);
	int k = count_multiple_4(A, n);
	int l = count_multiple_4(B, n);
	for (int i = 0; i < n; i++) {
		if (l > k) {
			cout << B[i] << ' ';
		}
		else {
			cout << A[i] << ' ';
		}
	}
	delete[] A;
	delete[] B;
	return 0;
}
void read_array1(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}
int count_multiple_4(int* array, int size, int t) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] < t) {
			count++;
		}
	}
	return count;
}