
#include "stdafx.h"
#include "Indiv.h"
#include "Functions.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

int PopulationSize = 0;
int Mutator = 0;
int Looping = 0;
int aVerage = 0;

//STAB STAB MURDER
std::vector <Indiv> Popkiller(int killing, std::vector <Indiv> Popper)
{
	std::vector <Indiv> Storage = Popper;
	int vecSize = Popper.size();
	int dIce = 0;
	int loopCount = 0;

	cout << vecSize << endl;

	if (killing<=vecSize)
	{
		Storage.erase(Storage.begin(), Storage.begin() + killing);
	}
	else
	{
		cout << "ERROR" << endl;
	}

	//Initialize random seed
	srand(time(NULL));

	dIce = rand() % 100 + 1;

	while (Popper.size>(vecSize - killing))
	{
		if (loopCount>=killing)
		{
			//Just kill
		}
		else
		{
			//Throw the dice
			dIce = rand() % 100 + 1;
			if (Popper[loopCount])
			{

			}
		}

	}

	//Create for while loop that looks for specific pop size

	/*
	while (Popper.size()>(Popper.size-killing))
	{
	-Obtain fitness of individual
	if loop counter >killing
	{
	Then just kill population that's from start to need amount
	}
	else
	{
	-Roll the dice.  Less fitness, greater chance of death
	-1-100 random dice
	-If dice lands underneath fitness value, survive
	if not, kill
	Increment death counter
	Inc loop counter
	}
	}
	for (int i =
	{
	(int i = 0; i < killing; i++)
	}*/
	
	cout << Storage.size() << endl;
	return Storage;
}

//Make DA LOVE here
/*std::vector <Indiv> createChildren (std::vector <Indiv> Lovers)
{
//TO DO: create children generator
-Create temp holder for original pop
-Create temporary holder for children

-Double check population, and check if it's even

-Create loop to create children
for(int i = 0; i < (half population size); i++)
{
-Access two Individual, and obtain both their fitnesses
-Plug fitness into overload constructor for children
-Push new child into population
-Rinse, wash, repeat until all population is done
}


}
*/

//Calculate Average for population (SHAZZAM)
int popAverage(std::vector <Indiv> averagePop)
{

	int av = 0;
	int vecSize = averagePop.size();

	for (int i = 0; i < vecSize; i++)
	{
		av = av + averagePop[1].getFit();
		/*if (i>vecSize)
		{
			av = av + averagePop[1].getFit();
		}*/
	}
	av = av / vecSize;

	return av;

}

/* int popAverage (std vector <Indiv> averagePop)
{	int av=0;


-Create average calculator
-This require loops. use while look
while (not at end)
{
av=av+fitness of selected indiv from averagePop ()
}
}
*/

//Main function for Genetic Algorotithm.
//(CREATE EVOLUTION INTERFACE HERE)
void geneticAlg(int popSize, int mut, int loop)
{
	PopulationSize = popSize;
	Mutator = mut;
	Looping = loop;

	//Must put if for making sure the pop size is even
	std::vector <Indiv> Pop(popSize);

	cout << popAverage(Pop) << endl;
	//Popkiller(10, Pop);
}

/*void eVolution (int popSize, int mUtator, int loopNumber)
{
-Place universal numbers here; or as global number in .cpp file
This includes
-average
-Desired pop size
-Desired average
-Mutator number
-Number of loops allowed

TODO: Create evolutionary loop to refine fitness
-Create population

//ACTIVATE EVOLUTION WHILE LOOP
(while (average<required average || loop<less than loop cap))
{
-Obtain average first
-First create children. Place them in temporary holder
-Kill half of population that's weak
-Push childre into population vector, and delete temp holder
}

Display if loop limit or average reached
ENDFUNCTION
}
*/


/*
int * Populate(int Pop)
{
int * Popper;
Popper = new int[Pop];

for (int i = 0; i < Pop; i++)
{
Popper[i] = i;
}

return Popper;
}*/