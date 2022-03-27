#include<iostream>

using namespace std;

int main() {
	double c;
	cin >> c;
	for (int m = 12; m <= 20; m += 2)
		cout << c * m / 10.0 << endl;
	return 0;
}