#include<iostream>

using namespace std;

int main8() {
	int a, b, s, k;
	cin >> a >> b;
	s = 0;
	k = 0;
	while (s <= a) {
		s += b;
		k++;
	}
	cout << k - 1 << ' ';
	return 0;
}