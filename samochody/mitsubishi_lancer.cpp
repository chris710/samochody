#include "mitsubishi_lancer.h"


mitsubishi_lancer::mitsubishi_lancer() {	//konstruktor
	moc = 240;
	vmax = 230;
	a100 = 7.0f;
}

mitsubishi_lancer::~mitsubishi_lancer() { 
}

float mitsubishi_lancer::power(){
	return this->moc;
}
float mitsubishi_lancer::maxspeed(){
	return this->vmax;
}
float mitsubishi_lancer::acceleration(){
	return this->a100;
}


mitsubishi_lancer::init::init() {
	car::cars.push_back(new mitsubishi_lancer);
}

mitsubishi_lancer::init mitsubishi_lancer::_init;