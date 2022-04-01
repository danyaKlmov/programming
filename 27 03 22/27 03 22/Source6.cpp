#include<iostream>

using namespace std;

int main13() {
	int n;
	cin >> n;
	double a, r = 1;
	cin >> a;
	for (int i = 1; i <= n; i++) {
		r *= a;
		cout << r;
	}
	return 0;
}