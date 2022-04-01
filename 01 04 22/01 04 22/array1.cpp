#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
	a[i] = 1 + i * 2;
	cout << a[i] << ' ';
}
	delete[] a;
	return 0;
}