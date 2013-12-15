#ifndef MAZDA_RX7
#define MAZDA_RX7
#include "car.h"


class mazda_rx7: public car {
public:
	mazda_rx7();		//konstruktor
	~mazda_rx7();

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