#include<iostream>

using namespace std;

int main4() {
	int n, k, l;
	cin >> n >> k >> l;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cout << i + 1;
	}
	int s = 0;
	for (int i = k - 1; i <= l - 1; ++i) {
		s += a[i];
	}
	delete[] a;
	cout << s;
	return 0;
}