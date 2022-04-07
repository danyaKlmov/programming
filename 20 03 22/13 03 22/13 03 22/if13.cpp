#include <iostream>

using namespace std;
int main() {
	int a, b, c, med; 
	cin >> a >> b >> c;
	med = a;
	if ((a > c) && (a > b)) {
		med = c;
	}
	if ((a > b) && (b > c)) {
		med = b;
	}
	else if ((a < b) && (a > c)) {
		med = a; 
	}
	else if ((b > med) && (b < c)) {
		med = b;
	}
	else if ((c > med) && (c < b)) {
		med = c;
	}
		cout << med;
	return 0;
}