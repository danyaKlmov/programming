#include"all.h"

void orange_queen_mom::laying_of_larvae() {
	if (larvae_count == 0) {
		return;
	}
	int type = rand() % 7;
	switch (type) {
	case 0:
		if (daughter_count > 0) {
			larvae = new orange_queen_daughter(daughter_count, this);
			daughter_count--;
			break;
		}
	case 1:
		larvae = new legendary_fighter();
		break;
	case 2:
		larvae = new exp_orange_work_ant();
		break;
	case 3:
		larvae = new legendary_work_ant();
		break;
	case 4:
		larvae = new simple_stocky_work_ant();
		break;
	case 5:
		larvae = new older_fighter();
		break;
	case 6:
		larvae = new older_accurate_fighter();
		break;
	}
	larvae->set_queen(this);
	larvae->set_colonium(get_colonium());
	larvae_count--;
}

void orange_queen_mom::print_type() {
	cout << "Рыжая королева мать";
}