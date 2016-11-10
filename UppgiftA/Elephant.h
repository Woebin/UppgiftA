#pragma once
#include <string>
#include "Animal.h"

namespace zoo {
	class Elephant : public Animal {
	public:
		Elephant(std::string n, int w, int t);
		int getTrunk() const;
	private:
		int trunk;
	};
	void printElephant(const Elephant* ele);
}