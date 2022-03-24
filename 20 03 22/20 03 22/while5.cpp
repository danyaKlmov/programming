#include<iostream>

using namespace std;

int main9() {
	int n, k;
	cin >> n;
	k = 0;
	while (n != 1) {
		n = n / 2;
		k++;
	}
	cout << k;
	return 0;
} 