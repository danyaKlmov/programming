#include<iostream>

using namespace std;

int main8() {
	int n;
	cin >> n;
	int* a = new int[n];
	cin >> a[0];
	cin >> a[1];
	for (int i = 2; i < n; i++) {
		a[i] = 0;
	}
	for (int i2 = 0; i2 < n; i2++) {
		a[i2] += a[i2];
	}
	for (int i = 0; i < n; i++) {
		cout << i << a[i];
	}
	delete[] a;
	return 0;
}