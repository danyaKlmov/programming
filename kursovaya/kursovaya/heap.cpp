#include"all.h"
#include<iostream>

using namespace std;

void heap::print_heap_info() {
	cout << "��������: " << name << "\n"
		<< "�������: " << get_resource_count(resource_type::stick) << "\n"
		<< "��������: " << get_resource_count(resource_type::leaf) << "\n"
		<< "��������: " << get_resource_count(resource_type::rock) << "\n"
		<< "�������: " << get_resource_count(resource_type::drop) << "\n";
}