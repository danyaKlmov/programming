#include<iostream>

using namespace std;

int main5() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cout << i + 1;
	}
	for (int i = 1; i < n; i += 2) {
		cout << a[i] << ' ';
	}
	for (int i = n - 1 - (n - 1) % 2; i >= 0; i -= 2) {
		cout << a[i] << ' ';
	}
	delete[] a;
	return 0;
}