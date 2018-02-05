#pragma once
class Indiv
{
public:
	Indiv();
	Indiv(int setT);
	~Indiv();

	int getFit();

	void resetFit(int replace);

private:
	int fitness;

};

