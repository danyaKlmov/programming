#include<iostream>

using namespace std;

int main() {
	int n, s;
	cin >> n;
	s = 1;
	int k = 1;
	while (s <= n) {
		k++;
		s += k;
	}
	cout << k - 1 << ' ' << s - k;
	return 0;
}