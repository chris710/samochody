#ifndef CAR_H
#define CAR_H
#include<vector>

using namespace std;

class car {
public:
	virtual float power() = 0;
	virtual	float maxspeed() = 0;
	virtual float acceleration0_100() = 0;
	static vector<car *> cars;
};

#endif