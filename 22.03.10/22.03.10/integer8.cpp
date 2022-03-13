#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	int d0 = a / 10;
	int d1 = a % 10;
	cout << d1 << ' ' << d0;
	return 0;

}