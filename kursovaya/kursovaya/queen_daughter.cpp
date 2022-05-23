#include"queen_daughter.h"
#include"world.h"

void queen_daughter::print_info() {
	cout << "\tQueen daughter\n";
	queen_ant::print_info();
}

void queen_daughter::turn(world* w) {
	if (!exile) {
		exile_daughter(w);
	}
	else {
		time_of_last_laying += 1;
	}
}

void queen_daughter::exile_daughter(world* w) {
	exile = true;
	cout << "Queen daughter " << name << " leaves colonium!\n";
	colonium* col = w->create_colonium(this);
	w->add_colonium(col);
	cout << "Queen daughter " << name << " create her own colonium " << col->get_name() << "\n";
}

void queen_daughter::laying_of_larvae() {
	if (larvae_count == 0) {
		return;
	}
	int type = rand() % 2;
	if (type == 0) {
		larvae = get_colonium()->create_work_ant();
	}
	if (type == 1) {
		larvae = get_colonium()->create_fighter();
	}
	larvae_count--; 
}

void queen_daughter::print_type() {
	cout << "queen_daughter";
}
