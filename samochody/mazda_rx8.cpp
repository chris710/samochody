#include "mazda_rx8.h"


mazda_rx8::mazda_rx8() {	//konstruktor
	moc = 250;
	vmax = 250;
	a100 = 6.5f;
}

mazda_rx8::~mazda_rx8() { 
}

float mazda_rx8::power(){
	return this->moc;
}
float mazda_rx8::maxspeed(){
	return this->vmax;
}
float mazda_rx8::acceleration(){
	return this->a100;
}


mazda_rx8::init::init() {
	car::cars.push_back(new mazda_rx8);
}

mazda_rx8::init mazda_rx8::_init;