#include<iostream>

using namespace std;

int main() {
	double a, s;
	cin >> a;
	s = 1;
	int k = 1;
	while (s <= a) {
		k++;
		s += 1.0 / k;
	}
	cout << k << ' ' << s;
	return 0;
} 