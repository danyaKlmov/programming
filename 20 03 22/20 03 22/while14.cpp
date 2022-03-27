#include<iostream>

using namespace std;

int main29() {
	double a, s;
	cin >> a;
	s = 0;
	int k = 0;
	while (s <= a) {
		k++;
		s += 1.0 / k;
	}
	cout << k - 1 << ' ' << s - 1.0 / k;
	return 0; 
} 