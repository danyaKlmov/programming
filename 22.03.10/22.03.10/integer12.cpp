#include<iostream>
#include<cmath>

using namespace std;

int main13() {
	int a;
	cin >> a;
	int d0 = a / 100;
	int d1 = a % 10;
	int d2 = (a / 10) % 10;
	cout << d1 << ' ' << d2 << ' ' << d0;
	return 0;

}