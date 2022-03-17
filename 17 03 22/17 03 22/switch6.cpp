# include <iostream>

using namespace std;
int main() {
	int n;
	float k;
	cin >> n >> k;

	switch (n) {
	case 1: 
		cout << k/10 << endl;
		break;
	case 2:
		cout << k * 1000 << endl;
		break;
	case 3:
		cout << k << endl;
		break;
	case 4:
		cout << k / 1000 << endl;
		break;
	case 5:
		cout << k / 100 << endl;
		break;
	}
	return 0;
}