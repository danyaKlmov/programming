#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < n; i++) {
		a[i] = a[i - 2] + a[i - 1];
	}
		for (int i = 0; i < n; i++) {
			cout << a[i] << ' ';
	}
		delete[] a;
	return 0;
}