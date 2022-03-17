# include <iostream>

using namespace std;
int main() {
	int k;
	cin >> k;

	switch (k) {
	case 1:
		cout << "bad" << endl;
		break;
	case 2:
		cout << "neud" << endl;
		break;
	case 3:
		cout << "ud" << endl;
		break;
	case 4:
		cout << "good" << endl;
		break;
	case 5:
		cout << "perfect" << endl;
		break;
	default: 
		cout << "error" << endl;
		break;
	}
	return 0;
}