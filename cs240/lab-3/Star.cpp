#include "Star.h"
#include "Star.h"
#include "Planet.h"
#include "Planet.h"
#include <iostream>
#include <cstdlib>

using namespace std;


Star::Star()
{
	planets=NULL;
	next_id = 0;
	current_planets=0;
}
Star::~Star(){
	for (int i=0;i<current_planets;i++)
	{
		delete this->planets[i];
		planets[i]=NULL;
	}
	delete[] this->planets;
}
int Star::addPlanet()
{
	rand_distance = rand()%3000;// Rand a number for planets id

	Planet ** new_planets=new Planet*[current_planets+1];
	
	//add planet
	for (int i=0; i<this->current_planets;i++)
		{
		new_planets[i]=planets[i];
		}
		Planet*planet = new Planet(rand_distance,next_id);
		new_planets[current_planets]=planet;
		int temp = next_id;
		next_id++;
		current_planets++;
	//delete planets
		delete[] this->planets;
		this->planets=new_planets;
		return temp;
}
Planet * Star::getPlanet(int id) {

	for (int i =0; i <this->current_planets;i++)
	{
		if(this->planets[i]->getID()==id)
		{
			return planets[i];
		}
	}
	return NULL;
}
bool Star:: removePlanet(int id)
{
	int j=0;
	int temp=99999;
	for(int i=0;i<this->current_planets;i++)
	{
		if(id==planets[i]->getID())
		{
			temp=i;
			break;
		}
	}
	if (temp==99999)return false;
	else
	{
		// create new pointer 
		Planet **new_planets=new Planet*[current_planets-1];
		cout<<temp<<endl;
		//delete planet
		for(int i=0;i<current_planets;i++)
		{
			if(i==temp)continue;
			new_planets[j]=planets[i];
			j++;
		}	
		delete this->planets[temp];
		current_planets--;
		delete[] this->planets;
		this->planets=new_planets;
		return true;

	}
}
Planet Star:: getFurthest(){
	
	for(int i=0;i<current_planets;i++)
	{
		if(planets[i]->getDistance()>maxDistance)
		{
			maxDistance=planets[i]->getDistance();
			tracker=i;
		}			
	}
	
	return **planets;
	
}

void Star::orbit()
{
	for(int i=0;i<current_planets;i++)
	{
		this->planets[i]->orbit();
	}	
}

void Star::printStarInfo()
{
	cout<<"The star currently has "<<current_planets<<" planets"<<endl;
	cout<<"Planets:"<<endl;
	for (int i=0;i<current_planets;i++)
	{
		cout<<"        Planet "<<this->planets[i]->getType()<<this->planets[i]->getID()<<" is "<<this->planets[i]->getDistance()<<" million miles away at position "<<this->planets[i]->getPos()<<" around the star"<<endl; 

	}	
}


