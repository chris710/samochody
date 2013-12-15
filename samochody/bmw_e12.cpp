#include "bmw_e12.h"


bmw_e12::bmw_e12() {	//konstruktor
	moc = 237;
	vmax = 208;
	a100 = 9.3f;
}

bmw_e12::~bmw_e12() { 
}

float bmw_e12::power(){
	return this->moc;
}
float bmw_e12::maxspeed(){
	return this->vmax;
}
float bmw_e12::acceleration(){
	return this->a100;
}

std::vector <car *> car::cars;


bmw_e12::init::init() {
	car::cars.push_back(new bmw_e12);
}

bmw_e12::init bmw_e12::_init;