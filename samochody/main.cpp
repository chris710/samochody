#include<iostream>
#include<map>
#include "parsename.h"
#include "car.h"

using namespace std;

int main() {
	map<string, car*> mapa;

	for(int i = 0; i<car::cars.size(); ++i) {	//dodawanie samochodów i wypisywanie ich
		mapa[parsename(typeid(*car::cars[i]).name())] = car::cars[i];
		cout<<parsename(typeid(*car::cars[i]).name());
	}

	while(true) {	//g³ówna pêtla programu

	}
	return 1;
}