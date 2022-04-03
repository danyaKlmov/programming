#include<iostream>

using namespace std;

int main10() {
	int n, k = 0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			cout << a[i];
			k++;
		}
	}
	cout << k;
	delete[] a;
	return 0;
}