#ifndef SUBARU_IMPREZA_H
#define SUBARU_IMPREZA_H
#include "car.h"


class subaru_impreza: public car {
public:
	subaru_impreza();		//konstruktor
	~subaru_impreza();

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