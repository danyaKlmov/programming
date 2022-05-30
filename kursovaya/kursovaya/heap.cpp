#include"all.h"
#include<iostream>

using namespace std;

void heap::print_heap_info() {
	cout << "Название: " << name << "\n"
		<< "Веточек: " << get_resource_count(resource_type::stick) << "\n"
		<< "Листиков: " << get_resource_count(resource_type::leaf) << "\n"
		<< "Камушков: " << get_resource_count(resource_type::rock) << "\n"
		<< "Росинок: " << get_resource_count(resource_type::drop) << "\n";
}