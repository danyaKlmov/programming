#include"all.h"

void orange_queen_daughter::laying_of_larvae() {
	if (larvae_count == 0) {
		return;
	}
	int type = rand() % 6;
	switch (type) {
	case 0:
		larvae = new legendary_fighter();
		break;
	case 1:
		larvae = new exp_orange_work_ant();
		break;
	case 2:
		larvae = new legendary_work_ant();
		break;
	case 3:
		larvae = new simple_stocky_work_ant();
		break;
	case 4:
		larvae = new older_fighter();
		break;
	case 5:
		larvae = new older_accurate_fighter();
		break;
	}
	larvae->set_queen(this);
	larvae->set_colonium(get_colonium());
	larvae_count--;
}

void orange_queen_daughter::print_type() {
	cout << "����� �������� ����";
}