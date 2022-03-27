#include<iostream>

using namespace std;

int main() {
	double c;
	cin >> c;
	for (int m = 1; m <= 10; m++)
		cout << m << ' ' << c * m / 10.0 << endl;
	return 0;
}