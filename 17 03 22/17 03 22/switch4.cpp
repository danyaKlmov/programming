# include <iostream>

using namespace std;
int main() {
	int k;
	cin >> k;

	switch (k) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "31" << endl;
		break;
	case 2:
		cout << "28" << endl;
		break;
	case 4: case 6: case 9: case 11:
		cout << "30" << endl; 
		break;
	}
	return 0;
}