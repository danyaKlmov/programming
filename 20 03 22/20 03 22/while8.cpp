#include<iostream>

using namespace std;

int main10() {
	int n;
	cin >> n;
	int k = 1;
	while (k * k <= n) {
		k++;
	}
	cout << k - 1;
	return 0;
}