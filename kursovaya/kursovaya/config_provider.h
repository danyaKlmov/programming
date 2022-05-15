#include<vector>
#include<string>

using namespace std;

class config_provider {
public:
	static vector<string> get_queen_names();
	static vector<string> get_coloniums_names();
	static vector<int> get_min_max_worker_healths();
	static vector<int> get_min_max_fighter_healths();
	static vector<int> get_min_max_queen_healths();
	static vector<int> get_min_max_fighter_attack();
	static vector<int> get_min_max_queen_attack();
	static vector<int> get_min_max_queen_larvae();
	static vector<int> get_min_max_queen_time_laying_of_larvae();
	static vector<int> get_min_max_worker_protect();
	static vector<int> get_min_max_fighter_protect();
	static vector<int> get_min_max_queen_protect();
	static vector<int> get_min_max_heap();
	static vector<int> get_min_max_colonium();
	static vector<int> get_min_max_worker_ant_count();
	static vector<int> get_min_max_fighter_ant_count();
	static vector<int> min_max_time_drought();
};