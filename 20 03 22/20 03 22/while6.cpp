#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n;
	k = 1;
	while (n > 0) {
		k *= n;
		n -= 2;
	}
	cout << k;
	return 0;
}