#ifndef MAZDA_RX8_H
#define MAZDA_RX8_H
#include "car.h"


class mazda_rx8: public car {
public:
	mazda_rx8();		//konstruktor
	~mazda_rx8();

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