
#include "stdafx.h"
#include "Indiv.h"
#include "Functions.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

//Global Variables for genetic algorithm
int PopulationSize = 0;
int Mutator = 0;
int Looping = 0;
int aVerage = 0;


/*Function Popkiller(AKA STAB STAB MURDER): 
- Deletes a random portion of the individual population. Lower a individual's fitness, greater chance
of deletion. 

- Will delete any beginning individuals if less than half of the population hasn't been 
   deleted after first loop. 

- Will stop after half of population is deleted
                     */
std::vector <Indiv> Popkiller(std::vector <Indiv> Popper)
{
	//Initialization Variables
	std::vector <Indiv> Storage = Popper;
	int vecSize = Popper.size();
	int dIce = 0;
	int killCount = 0;

	//Initialize random seed
	srand(time(NULL));

	for (int i = 0; i < vecSize; i++)
	{
	
		if (i >=(vecSize/2))
		{
			//Create size check to avoid shooting over vector length
			//Just kill remaining first indivs
			Popper.erase(Popper.begin(), Popper.begin()+(Popper.size()-vecSize/2));
			i = vecSize + 1;
			break;
		}
		else
		{
			//Throw the dice for each indiv
			dIce = rand() % 100 + 1;
			if (dIce>Popper[i].getFit)
			{
				Popper.erase(Popper.begin() + i);
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
	
	//check size
	cout << Storage.size() << endl;
	return Storage;
}

//Children Creator Function (AKA DA LOVE FUNCTION):
/*Function used to create children (New individuals) from two Individuals from the population. Fitness
  of new Individual will be based on fitness of parents (This value being the average of both parents).
  Small chance mutation, where a small amount of fitness value will be added or substracted.
*/

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

//Calculate Average for population (SHAZZAM!!):
/*Pretty self explanatory here. Function simply adds together all the fitness values, divides by
the # of individuals, and voila, average fitness value*/
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

//Genetic Algorotithm Function :
/*The main function of the programing, using all the other small functions to complete the task.
  Essentially, this functions acts as an interface for all the value to cleanly plugged in.
  Afterwards*/
//Abathur: "Sequences good. Can make better"
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