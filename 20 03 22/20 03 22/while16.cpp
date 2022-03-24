#include<iostream>

using namespace std;

int main() {
	double a = 10, s;
	int k = 0;
	s = 0;
	double p;
	cin >> p;
	while (s <= 21) {
		s += a;
		a += a * p / 100;
		k++;
	}
	cout << k << ' ' << s;
	return 0;
}