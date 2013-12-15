#ifndef HONDA_S2000_H
#define HONDA_S2000_H
#include "car.h"


class honda_s2000: public car {
public:
	honda_s2000();		//konstruktor
	~honda_s2000();

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