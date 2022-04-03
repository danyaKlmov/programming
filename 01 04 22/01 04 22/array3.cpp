#include<iostream>

using namespace std;

int main7() {
	int n, d, b;
	cin >> n >> d >> b;
	int* a = new int[n];
	a[0] = b;
	for (int i = 1; i < n; i++) {
		a[i] = a[0] + (i * d);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	delete[] a;
	return 0;
}