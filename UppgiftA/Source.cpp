#include "Elephant.h"

#include <string>
#include <iostream>

using namespace zoo;

int main() {
	Elephant* elephants[3];
	elephants[0] = new Elephant("Jumbo", 600, 170);
	elephants[1] = new Elephant("Mumbo", 500, 160);
	elephants[2] = new Elephant("Lillen", 800, 200);
	for (int i = 0; i < 3; ++i)
		printElephant(elephants[i]);
	return 0;
}