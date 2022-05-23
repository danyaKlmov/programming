#include<map>
#include<vector>
#include"resource.h"

using namespace std;

class ant;
class heap {
	map<resource_type, int> resources;
	vector<ant*> ants;
public:
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

};
