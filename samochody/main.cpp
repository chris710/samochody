#include<iostream>
#include<map>
#include "parsename.h"
#include "car.h"

using namespace std;

int main() {
	map<string, car*> mapa;
	cout<<"Lista:\n";
	for(int i = 0; i<car::cars.size(); ++i) {	//dodawanie samochodów i wypisywanie ich
		mapa[parsename(typeid(*car::cars[i]).name())] = car::cars[i];
		cout<<parsename(typeid(*car::cars[i]).name())<<endl;
	}
	cout<<endl;
	string reply = "asd";
	while(reply!="" && reply!="exit") {	//g³ówna pêtla programu
		cout<<"Podaj nazwe:\t";
		getline(cin, reply);
		if(mapa.find(reply) == mapa.end()) continue;		//wy³apywanie b³êdów
		car* s = mapa[reply];
		cout<<"maxspeed "<<s->maxspeed()<<endl;
		cout<<"power "<<s->power()<<endl;
		cout<<"acceleration "<<s->acceleration()<<endl<<endl;;
	}
	return 1;
}