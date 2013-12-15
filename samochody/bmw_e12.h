#ifndef BMW_E12_H
#define BMW_E12_H
#include "car.h"


class bmw_e12: public car {
public:
	bmw_e12();		//konstruktor
	~bmw_e12();

	float power();	//gettery
	float speed();
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