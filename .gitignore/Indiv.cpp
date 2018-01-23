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