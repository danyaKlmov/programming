#include<iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	int k = 2;
	while ((k < n - 1) & ((n % k) != 0)) {
		k++;
	}
	if ((n % k) != 0) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}