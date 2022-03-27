#include<iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	while ((n > 0) & (( n % 10) != 2)) {
		n /= 10;
	}
	if ((n > 0) && ( n % 10) == 2) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	return 0;
}