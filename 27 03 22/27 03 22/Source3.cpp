#include<iostream>

using namespace std;

int main10() {
	int a, b, r = 0;
	cin >> a >> b;
	for (int i = a; i <= b; ++i) {
		r += i * 1;
		cout << r << ' ';
	}
	return 0;
}