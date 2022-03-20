#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n % 3 == 0) {
		n/=3;
	}
	if (n == 1) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}