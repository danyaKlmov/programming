#include<iostream>

using namespace std;

int main() {
	int n, k = 0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 2; i < n; ++i) {
		if ((a[i - 2] < a[i - 1]) && !(a[i - 1] < a[i])) {
			k++;
		}
	}
	if (a[k - 2] != a[k - 1]) {
		k++;
		cout << k;
	}
	return 0;
}