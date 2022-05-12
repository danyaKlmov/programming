#include<iostream>

using namespace std;

void read_array(int* array, int size); 
int count_multiple_3(int* array, int size);

int main866() {
	int n;
	cin >> n;
	int* A = new int[n];
	int* B = new int[n];
	read_array(A, n);
	read_array(B, n);
	int k = count_multiple_3(A, n);
	int l = count_multiple_3(B, n);
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
void read_array(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}
int count_multiple_3(int* array, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] % 3 == 0) {
			count++;
		}
	}
	return count;
}
