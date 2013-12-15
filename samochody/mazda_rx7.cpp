#include "mazda_rx7.h"


mazda_rx7::mazda_rx7() {	//konstruktor
	moc = 239;
	vmax = 250;
	a100 = 5.3f;
}

mazda_rx7::~mazda_rx7() { 
}

float mazda_rx7::power(){
	return this->moc;
}
float mazda_rx7::maxspeed(){
	return this->vmax;
}
float mazda_rx7::acceleration(){
	return this->a100;
}


mazda_rx7::init::init() {
	car::cars.push_back(new mazda_rx7);
}

mazda_rx7::init mazda_rx7::_init;