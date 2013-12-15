#include "subaru_impreza.h"


subaru_impreza::subaru_impreza() {	//konstruktor
	moc = 300;
	vmax = 255;
	a100 = 5.2f;
}

subaru_impreza::~subaru_impreza() { 
}

float subaru_impreza::power(){
	return this->moc;
}
float subaru_impreza::maxspeed(){
	return this->vmax;
}
float subaru_impreza::acceleration(){
	return this->a100;
}


subaru_impreza::init::init() {
	car::cars.push_back(new subaru_impreza);
}

subaru_impreza::init subaru_impreza::_init;