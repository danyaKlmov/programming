#include<iostream>
#include<string>

using namespace std;

struct student {
	string name;
	string surname;
	string patronymic;
	int matematika;
	int phisycs;
	int cherchenie;
	int science;
	int sopromat;
};

int main4() {
	int n;
	cout << "vvedite kol-vo studentov:\n ";
	cin >> n;
	student* a = new student[n];
	for (int i = 0; i < n; i++) {
		cout << "vvedite informacu o " << i + 1 << "-m cheloveke:\n";
		cin >> a[i].name >> a[i].surname >> a[i].patronymic >> a[i].matematika >> a[i].phisycs >> a[i].cherchenie >> a[i].science >> a[i].sopromat;
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].matematika <= 2) {
			k++;
		}
		if (a[i].phisycs <= 2) {
			k++;
		}
		if (a[i].cherchenie <= 2) {
			k++;
		}
		if (a[i].science <= 2) {
			k++;
		}
		if (a[i].sopromat <= 2) {
			k++;
		}
	}
	cout << "kol-vo ocenok: " << k;
	delete[] a;
	return 0;
}