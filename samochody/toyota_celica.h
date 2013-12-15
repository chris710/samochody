#ifndef TOYOTA_CELICA_H
#define TOYOTA_CELICA_H
#include "car.h"


class toyota_celica: public car {
public:
	toyota_celica();		//konstruktor
	~toyota_celica();

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