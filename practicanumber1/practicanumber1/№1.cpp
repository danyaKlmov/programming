#include<iostream>
#include<string>

using namespace std;

struct Transport {
	string name;
	string surname;
	string patronymic;
	int luggage;
	double weight;
};

int main1() {
	int n;
	cout << "vvedite kol-vo passazhirov:\n";
	cin >> n;
	Transport* a = new Transport[n];
	for (int i = 0; i < n; ++i) {
		cout << "vvedite informaciu o " << i + 1 << "-m passazhire:\n";
		cin >> a[i].name >> a[i].surname >> a[i].patronymic >> a[i].luggage >> a[i].weight;
	}
	int k = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i].luggage > 3) {
			k++;
		}
	}
	cout << "kol-vo passazhirov u kotorix > 3 veshei: " << k;
	delete[] a;
	return 0;
}