#include"all.h"

void simple_fighter::print_info() {
	cout << "\tОбычный боец" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tАтака: " << strength << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет атаковать 1 цель за раз и наносит 1 укус\n\n";
}

void simple_fighter::print_type() {
	cout << "Обычный боец";
}