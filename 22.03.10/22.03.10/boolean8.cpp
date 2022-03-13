#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	bool c = (a % 2 == 1) && (b % 2 == 1);
	cout << c;
	return 0;
}