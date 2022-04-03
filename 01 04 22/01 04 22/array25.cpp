#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	bool b = true;
	int c;
	c = a[1] / a[0];
	for (int i = 1; i < n; ++i) {
		if (!(a[i] == a[1] * a[i - 1] / a[0]) && (a[1] * a[i - 1] % a[0] == 0)) {
			b = false;
		}
	}
	cout << b; 
	delete[] a; 
	return 0;
}