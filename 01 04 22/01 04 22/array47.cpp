#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int i2, k = 1;
	for (int i = 1; i < n; i++) {
		k++;
		for (int i2 = i - 1; i2 >= 0; i2--) {
			if (a[i] == a[i2]) {
			k--;
			break;
		}
	}
}
	cout << k;
	return 0;
}