
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


/*Population Kill Function (AKA STAB STAB MURDER): 
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
	int dIce = 0;
	int killCount = 0;
	int vecSize = Popper.size();
	cout << Popper.size() << endl;

	//Initialize random seed
	srand(time(NULL));

	//Iterator look for seeing who gets killed
	for (std::vector <Indiv>::iterator it = Popper.begin(); it !=Popper.end() ; )
	{
		//Throw dice. See if Indiv survives or not. Higher fit, greater chance.
		//If no kill, move onto next indiv
		dIce = rand() % 100 + 1;
		if (dIce > (it->getFit()))
		{
			it = Popper.erase(it);
			++killCount;
		}
		else
		{
			++it;
		}

		//Check if there are too many deaths. If half of population killed, exit
		if (killCount >= (vecSize / 2))
		{
			it = Popper.end();
			break;
		}
	}
	
	cout << Popper.size() << endl;
	return Storage = Popper;
}

//Children Creator Function (AKA DA LOVE FUNCTION):
/*Function used to create children (New individuals) from two Individuals from the population. Fitness
  of new Individual will be based on fitness of parents (This value being the average of both parents).
  Small chance mutation, where a small amount of fitness value will be added or substracted.
*/
std::vector <Indiv> createChildren(std::vector <Indiv> Lovers)
{
	std::vector <Indiv> tempParents=Lovers;
	std::vector <Indiv> tempChildren;
	int vecSize = Lovers.size()/2;
	int fit1 = 0;
	int fit2 = 0;

	for (std::vector <Indiv>::iterator it = Lovers.begin(); it != Lovers.end(); )
	{
		fit1 = it->getFit();
		if (it != Lovers.end())
		{
			++it;
			fit2 = it->getFit();
		}
		else
		{
			break;
		}
		//Spawn child
		tempChildren.push_back(Indiv(fit1, fit2, Mutator ));
	}
	
	for (int i = 0; i < vecSize; i++)
	{
		tempChildren.push_back(Indiv());
	}

	return tempChildren;
}

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

	Popkiller(Pop);

	//cout << popAverage(Pop) << endl;
	//Popkiller(10, Pop);
}

//BELLOW: PSEUDO CODE FOR ABOVE FUNCTION
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