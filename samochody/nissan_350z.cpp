#include "nissan_350z.h"


nissan_350z::nissan_350z() {	//konstruktor
	moc = 300;
	vmax = 250;
	a100 = 5.8f;
}

nissan_350z::~nissan_350z() { 
}

float nissan_350z::power(){
	return this->moc;
}
float nissan_350z::maxspeed(){
	return this->vmax;
}
float nissan_350z::acceleration(){
	return this->a100;
}


nissan_350z::init::init() {
	car::cars.push_back(new nissan_350z);
}

nissan_350z::init nissan_350z::_init;