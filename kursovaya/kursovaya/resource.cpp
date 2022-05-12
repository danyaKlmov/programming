#include"resource.h"
#include<iostream>

using namespace std;

void resource::print() {
	if (type == resource_type::stick) {
		cout << "stick";
	}
	if (type == resource_type::rock) {
		cout << "rock";
	}
	if (type == resource_type::drop) {
		cout << "drop";
	}
	if (type == resource_type::leaf) {
		cout << "leaf";
	}
}