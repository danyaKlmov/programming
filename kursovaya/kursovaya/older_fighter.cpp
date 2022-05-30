#include"all.h"

void older_fighter::print_info() {
	cout << "\tСтарший боец" << '\n'
		<< "\tЗдоровье: " << health << '\n'
		<< "\tАтака: " << strength << '\n'
		<< "\tЗащита: " << protect << '\n'
		<< "\tМожет атаковать 1 цель за раз и наносит 1 укус\n\n";
}

void older_fighter::print_type() {
	cout << "Старший боец";
}