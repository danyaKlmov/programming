#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int d = (b * b) - (4 * a * c);
	bool e = d >= 0;
	cout << e;
	return 0;
}