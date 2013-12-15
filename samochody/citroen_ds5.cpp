#include "citroen_ds5.h"


citroen_ds5::citroen_ds5() {	//konstruktor
	moc = 200;
	vmax = 211;
	a100 = 8.6f;
}

citroen_ds5::~citroen_ds5() { 
}

float citroen_ds5::power(){
	return this->moc;
}
float citroen_ds5::maxspeed(){
	return this->vmax;
}
float citroen_ds5::acceleration(){
	return this->a100;
}


citroen_ds5::init::init() {
	car::cars.push_back(new citroen_ds5);
}

citroen_ds5::init citroen_ds5::_init;