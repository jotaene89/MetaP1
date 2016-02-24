#include "solutionKP.h"

meta::solutionKP::solutionKP()
{

}

meta::solutionKP::solutionKP(vector< bool > vector)
{
	this->solution = vector;
}

meta::solutionKP::~solutionKP()
{
	this->solution.clear();
}

vector< bool > meta::solutionKP::getSolution()
{
	return this->solution;
}

int meta::solutionKP::getSize()
{
	return this->solution.size();
}

bool meta::solutionKP::getValueOfPosition(int position)
{
	return this->solution[position];
}

void meta::solutionKP::setValueForPosition(int position, bool value)
{
	this->solution[position] = value;
}
