#ifndef NISSAN_350Z_H
#define NISSAN_350Z_H
#include "car.h"


class nissan_350z: public car {
public:
	nissan_350z();		//konstruktor
	~nissan_350z();

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