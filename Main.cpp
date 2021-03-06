// Objects.cpp : Defines the entry point for the console application.
//
//Author notes:
/*The following code here is a recreation of the genetic algorithm that I did for my Programming Methedologies course.
	The reason for this is because the original code was lost, since I had done the algorithm quite some time ago, and
	had changed/reformated computers quite a few times. 
	Because of this, I decide to recreate the code, both show and tell, and some practice

	WHAT IT DOES:
	The Genetic Algorithm essentially plays a Darwinian simulation: survival of the fittest. It was will generate a 
	array/vector of objects called individuals, each with their own randomly assigned fitness level. It will then obtain
	the average fitness of this 'population' before creating children using pairs of individual (Much like husband and
	wife). It will then cull the individuals based on the average fitness level (Except the children), push the 
	children into the vector as a part of the population, and repreat the process until a specific average is achieved.

	UPDATE 2018/02/26:
	Most of the main functions are complete and generally functional. Mainly need to test child creator.
	Then assemble and test program.

*/

#include "stdafx.h"
#include "Indiv.h"
#include "Functions.h"
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	geneticAlg(50, 30, 40);
	
    return 0;
}

