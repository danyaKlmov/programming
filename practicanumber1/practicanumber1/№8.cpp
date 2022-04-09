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

int main5() {
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
		if ((a[i].matematika > 2) && (a[i].phisycs > 2) && (a[i].cherchenie > 2) && (a[i].science > 2) && (a[i].sopromat > 2)) {
			k++;
		}
	}
	cout << "kol-vo chelovek: " << k;
	delete[] a;
	return 0;
}