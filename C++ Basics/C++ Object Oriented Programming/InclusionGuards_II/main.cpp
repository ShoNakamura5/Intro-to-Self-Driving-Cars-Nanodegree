#include <iostream>
#include <string>
#include "engine.h"
#include "car.h"

using namespace std;

int main() {

	Engine enginelarge("4L");
	Engine enginesmall("2.5L");

	Car carone("red", 5);
	Car cartwo("green", 4);


	cout << "Small engine size "  << enginesmall.getSize() << endl;
	cout << "Large engine size " << enginelarge.getSize() << endl;
	cout << "Car one doors " << carone.getDoors() << endl;
	cout << "Car two doors " << cartwo.getDoors() << endl;

	cout << "Car one engine size " << carone.getEngine() << endl;
	carone.setEngine(enginelarge.getSize());
	cout << "Car one engine size new " << carone.getEngine() << endl;

	return 0;
}