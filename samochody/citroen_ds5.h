#ifndef CITROEN_DS5_H
#define CITROEN_DS5_H
#include "car.h"


class citroen_ds5: public car {
public:
	citroen_ds5();		//konstruktor
	~citroen_ds5();

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