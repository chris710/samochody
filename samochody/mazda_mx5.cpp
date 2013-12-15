#include "mazda_mx5.h"


mazda_mx5::mazda_mx5() {	//konstruktor
	moc = 160;
	vmax = 218;
	a100 = 7.9f;
}

mazda_mx5::~mazda_mx5() { 
}

float mazda_mx5::power(){
	return this->moc;
}
float mazda_mx5::maxspeed(){
	return this->vmax;
}
float mazda_mx5::acceleration(){
	return this->a100;
}


mazda_mx5::init::init() {
	car::cars.push_back(new mazda_mx5);
}

mazda_mx5::init mazda_mx5::_init;