#include "solutionTSP.h"

meta::solutionTSP::solutionTSP()
{

}

meta::solutionTSP::solutionTSP(vector< int > vector)
{
	this->solution = vector;
}

meta::solutionTSP::~solutionTSP()
{
	this->solution.clear();
}

vector< int > meta::solutionTSP::getSolution()
{
	return this->solution;
}

int meta::solutionTSP::getSize()
{
	return this->solution.size();
}

int meta::solutionTSP::getValueOfPosition(int position)
{
	return this->solution[position];
}

void meta::solutionTSP::setValueForPosition(int position, int value)
{
	this->solution[position] = value;
}

void meta::solutionTSP::printSolution()
{
	cout << "Solucion:[ ";
	for(int i=0; i<this->getSize(); i++)
	{
		cout << getValueOfPosition(i) << " ";
	}
	cout << "]" << endl;
}
