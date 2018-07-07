#include<iostream>
#include<string>

using namespace std;


typedef int KG;
typedef double VALUE;
typedef int SPACE;


class Cargo {

private:
	std::string name_;
	KG weight_;
	VALUE price_;

public:
	Cargo(std::string, KG,VALUE);
	Cargo(const Cargo&);
	void aboutCargo();
	std::string getName() const;
	KG getWeight() const;
	void setPrice(VALUE);
	VALUE getPrice() const;
};


Cargo::Cargo(std::string name, KG weight, VALUE price):
	name_(name), weight_(weight),price_(price)
{}

Cargo::Cargo(const Cargo& c) {
	name_ = c.name_;
	weight_ = c.weight_;
	price_ = c.price_;
}

void Cargo::aboutCargo() {
	std::cout << "Name: " << this->name_ << "\n";
	std::cout << "Weight: " << this->weight_ << "\n";
	std::cout << "Price: " << this->price_ << "\n";
}


std::string Cargo::getName() const {
	return this->name_;
}


KG Cargo::getWeight() const {
	return this->weight_;
}


void Cargo::setPrice(VALUE price) {
	price_ = price;
}

VALUE Cargo::getPrice() const {
	return this->price_;
}


class Wagon {

private:
	KG max_weight_;
	Cargo** list;
	static int ID;
	int myID_ = ++ID;
	int num = 0;
	SPACE max_space_;

public:
	Wagon(KG, SPACE);
	~Wagon();
	KG getMaxWeight() const;
	KG getCurrentWeight() const;
	VALUE getWagonPrice() const;
	void aboutWagon(); 
	void addCargo(Cargo*);
	bool operator==(const Wagon&);
	bool freeWeight(Cargo*);
};

int Wagon::ID = 0;

Wagon::Wagon(KG max_weight, SPACE max_space):
	max_weight_(max_weight),max_space_(max_space)
{
	list = new Cargo*[max_space_];
}


Wagon::~Wagon() {
	delete[] list;
}


KG Wagon::getMaxWeight() const {
	return this->max_weight_;
}


KG Wagon::getCurrentWeight() const {
	KG pom = 0;
	for (int i = 0; i < num; i++) {
		pom += list[i]->getWeight();
	}
	return pom;
}


VALUE Wagon::getWagonPrice() const {
	VALUE pom = 0;
	for (int i = 0; i < num; i++) {
		pom += list[i]->getPrice();
	}
	return pom;
}


void Wagon::aboutWagon() {
	std::cout << "----------------------" << "\n";
	std::cout << "Wagon ID: " << this->myID_ << "\n";
	std::cout << "Current weight: " << getCurrentWeight() << "\n";
	std::cout << "Wagon price: " << getWagonPrice() << "\n";
}


bool Wagon::freeWeight(Cargo* c) {
	KG cargo_weight = c->getWeight();
	KG current_weight = getCurrentWeight();
	
	KG to_add = cargo_weight + current_weight;

	if (to_add <= max_weight_) {
		return true;
	}
	else
	{
		return false;
	}
}


bool Wagon::operator==(const Wagon& w) {

	if ((max_weight_ == w.max_weight_) && (max_space_ == w.max_space_)) {
		return true;
	}
	else {
		return false;
	}
}


void Wagon::addCargo(Cargo* c) {
	if ((num < max_space_)  && freeWeight(c)) {
		list[num++] = c;
	}
	else {
		std::cout << "There is no more space or you cargo is too heavy." << "\n";
	}
}


class Train {

private:
	std::string name_;
	struct Elem {
		Wagon* wagon_;
		struct Elem* next_;

		Elem(Wagon* w, Elem* n = nullptr) :
			wagon_(w), next_(n) {}
	};
	Elem * first_ = nullptr;
public:
	Train(std::string);
	Train(const Train&);
	Train(Train&&);
	~Train();
	void addWagon(Wagon*);
	void removeAllWagons();
	void aboutTrain();
	friend bool more_valuable(const Wagon& w1, const Wagon& w2);
};


Train::Train(std::string name):
	name_(name){}


Train::Train(const Train& t) {
	name_ = t.name_;
	for (Elem* cur = t.first_; cur; cur = cur->next_)
		first_ = new Elem(cur->wagon_, first_);
}


Train::Train(Train&& t) {
	name_ = t.name_;
	first_ = t.first_;
	t.first_ = nullptr;
}

Train::~Train() {
	removeAllWagons();
}


void Train::addWagon(Wagon* w) {
	first_ = new Elem(w, first_);
}


void Train::removeAllWagons() {
	Elem* cur = first_, *pom;
	while (cur) {
		pom = cur;
		cur = cur->next_;
		delete pom;
	}
}


void Train::aboutTrain() {
	std::cout << "Train name: " << name_ << "\n";
	std::cout << "Train wagons: " << "\n";
	for (Elem* cur = this->first_; cur; cur = cur->next_) {
		cur->wagon_->aboutWagon();
	}
}


bool more_valuable(const Wagon& w1, const Wagon& w2) {
	if (w1.getWagonPrice() > w2.getWagonPrice()) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	Cargo c1("Wood", 530, 222), c2("Gold", 21, 543);
	Wagon v1(5000, 30), v2(3000, 40), v3(24000,100);

	v1.addCargo(&c1);
	v1.addCargo(&c2);
	v1.addCargo(&c2);
	v2.addCargo(&c2);
	v3.addCargo(&c2);
	v3.addCargo(&c2);
	v3.addCargo(&c2);

	Train my_train("Test-Train BST010");

	my_train.addWagon(&v3);
	my_train.addWagon(&v1);
	my_train.addWagon(&v2);

	my_train.aboutTrain();

	getchar();
	getchar();

	return 0;
}
