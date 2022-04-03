#include<iostream>

using namespace std;

int main89() {
	int n, k, l;
	cin >> n >> k >> l;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i]; 
	}
	int s = 0;
	for (int i = k; i <= l; ++i) {
		s += a[i];
	}
	cout << s;
	delete[] a;
	return 0;
}