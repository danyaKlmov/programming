#include<iostream>
#include<string>

using namespace std;

struct Anketa {
	string name;
	string surname;
	string patronymic;
	string street;
	int house;
	int flat;
	string gender;
	int age;
};

int main2() {
	int n;
	cout << "vvedite kol-vo chelovek:\n ";
	cin >> n;
	Anketa* a = new Anketa[n];
	for (int i = 0; i < n; ++i) {
		cout << "vvedite informacu o " << i + 1 << "-m cheloveke:\n";
		cin >> a[i].name >> a[i].surname >> a[i].patronymic >> a[i].street >> a[i].house >> a[i].flat >> a[i].gender >> a[i].age;
	}
	int k = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i].gender == "female" && a[i].age > 30) {
			k++;
		}
	}
	cout << "kol-vo chelovek: " << k; 
	delete[] a;
	return 0;
}