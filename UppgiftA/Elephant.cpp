#include "Animal.h"
#include "Elephant.h"
#include <iostream>

using namespace std;

namespace zoo {

	Elephant::Elephant(string n, int w, int t) :Animal(n, w), trunk(t) {}

	int Elephant::getTrunk() const { return trunk; }

	void printElephant(const Elephant* ele) {
		cout << ele->getName() << " "
			<< ele->getWeight() << " "
			<< ele->getTrunk() << endl;
	}
}