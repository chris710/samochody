#ifndef MAZDA_MX5_H
#define MAZDA_MX5_H
#include "car.h"


class mazda_mx5: public car {
public:
	mazda_mx5();		//konstruktor
	~mazda_mx5();

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