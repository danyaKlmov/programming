#include<iostream>

using namespace std;

int main78() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << ' ';
	}
	delete[] a;
	return 0;
}