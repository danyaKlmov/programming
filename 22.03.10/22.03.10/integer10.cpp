#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	int d0 = a % 10;
	int d2 = (a / 10) % 10;
	cout << d0 << ' ' << d2 ;
	return 0;

}