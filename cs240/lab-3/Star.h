#ifndef STAR_H
#define STAR_H
#include"Planet.h"
#include"Planet.h"
#include<iostream>

class Star{
	public:
        int current_planets;
        int next_id;
	int rand_distance;
	int maxDistance;
	int tracker;
        Planet ** planets;
        Star();
	~Star();
        int addPlanet();
        Planet getFurthest();
        void orbit();
        void printStarInfo();
	bool removePlanet(int);
	Planet * getPlanet(int);
	
        int getCurrentNumPlanets(){
	return this->current_planets;};

};
#endif
