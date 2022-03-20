#include<iostream>

using namespace std;

int main6() {
	int n, s;
	cin >> n;
	s = 0;
	int k = 0;
	while (s < n) {
		s += k;
		k++;
	}
	cout << k - 1 << ' ' << s;
	return 0;
}