#include "Indiv.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Default constructor.  Gives random Fitness from 1-100
Indiv::Indiv()
{
	//Initialize random seed
	srand(time(NULL));

	fitness = rand() % 100 + 1;
}

//Constuctor sets Fitness to specific level
Indiv::Indiv(int setT)
{

	fitness = setT;
}

//Constructor for parents w/ mutator. Creates indiv based on two given fitness values. Mutator 
//provides random value
Indiv::Indiv(int parent1, int parent2, int mutator)
{
	srand(time(NULL));
	int avChild = ((parent1+parent2)/2) +rand() % mutator + 1;
	if (avChild>100)
	{
		avChild = 100;
	}

	fitness = avChild;
}

//Deconstructor
Indiv::~Indiv()
{
}

//Retrieve fitness value
int Indiv::getFit()
{
	return fitness;
}

//Manually set fitness during program
void Indiv::resetFit(int replace)
{
	fitness = replace;
}