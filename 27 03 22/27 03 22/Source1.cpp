#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
		cout << i << ' ';
	cout << b - a + 1 << ' ';
	return 0;
}