#pragma once
class Indiv
{
public:
	Indiv();
	Indiv(int setT);
	Indiv(int parent1, int parent2, int mutator);
	~Indiv();

	int getFit();

	void resetFit(int replace);

private:
	int fitness;

};

