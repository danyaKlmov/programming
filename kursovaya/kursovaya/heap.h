#ifndef HEAP_H
#define HEAP_H

#include<map>
#include<vector>
#include<string>
#include"resource.h"

using namespace std;

class ant;
class heap {
	map<resource_type, int> resources;
protected:
	vector<ant*> ants;
	string name;
public:
	void print_heap_info();
	heap(const string& name, int stick_count, int rock_count, int leaf_count, int drop_count) {
		resources[resource_type::drop] = drop_count;
		resources[resource_type::stick] = stick_count;
		resources[resource_type::rock] = rock_count;
		resources[resource_type::leaf] = leaf_count;
		this->name = name;
	}
	int get_ants_count() {
		return ants.size();
	}
	ant* get_ant(int number) {
		return ants[number];
	}
	void clear_ants() {
		ants.clear();
	}
	void add_ant(ant* a) {
		ants.push_back(a);
	}
	int get_resource_count(resource_type type) {
		return resources[type];
	}
	void add_resource(resource_type type, int count) {
		resources[type] += count;
	}
	void take_resource(resource_type type) {
		resources[type] -= 1;
	}

	string get_name() {
		return name;
	}

};

#endif
