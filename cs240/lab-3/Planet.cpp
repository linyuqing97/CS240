#include <iostream>
#include <cstdlib>
#include "Planet.h"
#include "Planet.h"
using namespace std;
Planet::Planet(int distance, int id){
	this->id = id;
	this->distance = distance;
    	this->position = 0;
	const char typeSelect[3] ={'h','r','g'};
	int randIndex=rand()%3;
	type = typeSelect[randIndex];
	position=rand()%360;
	
}

int Planet::orbit()
{
	if(this->position == 359)
	{
		this->position=0;
		return this->position;
	}
	else
	{
		this->position+=1;
		return this->position; 
	}
}
