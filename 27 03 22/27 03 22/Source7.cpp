#include<iostream>

using namespace std;

int main14() {
	int n;
	cin >> n;
	double a, r = 1;
	for (int i = 1; i <= n; i++) {
		r *= a;
		cout << r << ' ';
	}
	return 0;
}