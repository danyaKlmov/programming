#include<iostream>

using namespace std;
int main17() {
	int n;
	cin >> n;
	while (n > 0) {
		cout << n % 10;
		n /= 10;
	}
	return 0;
}