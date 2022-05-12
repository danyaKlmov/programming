enum class resource_type {
	stick, rock, drop, leaf
};

class resource {
	resource_type type;
public:
	resource(resource_type type) {
		this->type = type;
	}
	resource_type get_type() {
		return type;
	}
	void print();
};
