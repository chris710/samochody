#include "toyota_celica.h"


toyota_celica::toyota_celica() {	//konstruktor
	moc = 192;
	vmax = 225;
	a100 = 7.4f;
}

toyota_celica::~toyota_celica() { 
}

float toyota_celica::power(){
	return this->moc;
}
float toyota_celica::maxspeed(){
	return this->vmax;
}
float toyota_celica::acceleration(){
	return this->a100;
}


toyota_celica::init::init() {
	car::cars.push_back(new toyota_celica);
}

toyota_celica::init toyota_celica::_init;