#include<iostream>

using namespace std;

int main6() {
	int n;
	cin >> n;
	int* a = new int[n];
	a[0] = 2;
	for (int i = 1; i < n; i++) {
		a[i] = a[i - 1] * 2;
	}
	for (int i = 0; i < n; i++) {
		cout << ' ' << a[i] << ' ';
	}
	delete[] a;
	return 0;
}