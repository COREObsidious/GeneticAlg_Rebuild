#include <iostream>
#include <cmath>
#include <vector>
#include "Indiv.h"
using namespace std;

#pragma once
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

void geneticAlg(int popSize, int mut, int loop);

int popAverage(std::vector <Indiv> averagePop);

std::vector <Indiv> Popkiller(std::vector <Indiv> Popper);


#endif // !FUNCTIONS_H_
