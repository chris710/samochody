#include<iostream>
#include<map>
#include "parsename.h"
#include "car.h"

using namespace std;

int main() {
	map<string, car*> mapa;

	for(int i = 0; i<car::cars.size(); ++i) {	//dodawanie samochod�w i wypisywanie ich
		mapa[parsename(typeid(*car::cars[i]).name())] = car::cars[i];
		cout<<parsename(typeid(*car::cars[i]).name());
	}

	while(true) {	//g��wna p�tla programu

	}
	return 1;
}