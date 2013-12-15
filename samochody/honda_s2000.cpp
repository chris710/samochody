#include "honda_s2000.h"


honda_s2000::honda_s2000() {	//konstruktor
	moc = 240;
	vmax = 240;
	a100 = 6.2f;
}

honda_s2000::~honda_s2000() { 
}

float honda_s2000::power(){
	return this->moc;
}
float honda_s2000::maxspeed(){
	return this->vmax;
}
float honda_s2000::acceleration(){
	return this->a100;
}


honda_s2000::init::init() {
	car::cars.push_back(new honda_s2000);
}

honda_s2000::init honda_s2000::_init;