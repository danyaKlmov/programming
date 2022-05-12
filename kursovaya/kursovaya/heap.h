#include<map>
#include"resource.h"

using namespace std;

class heap {
	map<resource_type, int> resources;
public:
	int get_resource_count(resource_type type) {
		return resources[type];
	}
	void add_resource(resource_type type, int count) {
		resources[type] += count;
	}
	resource take_resource(resource_type type) {
		resources[type] -= 1;
		return resource(type);
	}
};
