#include<iostream>

using namespace std;
int main18() {
	int n;
	cin >> n;
	int s = 0, a = 0;
	while (n > 0) {
		a++;
		s += n % 10;
		n /= 10;
	}
	cout << a << ' ' << s;
	return 0;
}