#include "car.h"

using namespace std;

Car::Car (string newcolor, int newdoors) {
	color = newcolor;
	doors = newdoors;
	enginetype.setSize("2.5L");
}

string Car::getColor() {
	return color;
}

int Car::getDoors() {
	return doors;
}

string Car::getEngine() {
	return enginetype.getSize();
}

void Car::setColor(string newcolor) {
	color = newcolor;
}

void Car::setDoors(int newdoors) {
	doors = newdoors;
}

void Car::setEngine(string newengine) {
	enginetype.setSize(newengine);
}