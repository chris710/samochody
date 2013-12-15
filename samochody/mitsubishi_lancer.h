#ifndef MITSUBISHI_LANCER_H
#define MITSUBISHI_LANCER_H
#include "car.h"


class mitsubishi_lancer: public car {
public:
	mitsubishi_lancer();		//konstruktor
	~mitsubishi_lancer();

	float power();	//gettery
	float maxspeed();
	float acceleration();

private:
	class init {		//init
	public:
		init();
	};
	static init _init;

					//pola
	float moc;		//moc silnika
	float vmax;		//prêdkoœæ maksymalna
	float a100;		//przyspieszenie 0-100
};

#endif