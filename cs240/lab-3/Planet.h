#ifndef PLANET_H
#define PLANET_H
#include<iostream>

class Planet{
	private:
		int id;
		int position;
		int distance;
		char type;
	public:
		Planet(int,int);
        int orbit();
	int getID(){return this->id;};
        int getDistance(){return this->distance;};
        int getPos(){return this->position;};
	char getType(){return this->type;};
		//you may add any additional methods you may need.
};
#endif
