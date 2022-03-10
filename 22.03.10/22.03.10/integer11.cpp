#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	int d0 = a / 100;
	int d1 = a % 10;
	int d2 = (a / 10) % 10;
	int s = d0 + d1 + d2;
	int m = d0 * d1 * d2;
	cout << s << ' ' << m;
	return 0;
		
}