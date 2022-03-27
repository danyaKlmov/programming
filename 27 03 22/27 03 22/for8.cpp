#include<iostream>

using namespace std;

int main() {
	int a, b;
	int c = 1;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		c *= i;
		cout << c << ' ';
	return 0;
}