#include "solutionKP.h"

meta::solutionKP::solutionKP()
{

}

meta::solutionKP::solutionKP(vector< bool > vec)
{
	for(unsigned int i=0; i<vec.size(); i++)
	{
		this->solution.push_back(vec[i]);
	}
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

void meta::solutionKP::printSolution()
{
	cout << "Solution: [ ";
	for(unsigned int i=0; i< this->solution.size(); i++)
	{
		cout << this->solution[i] << " ";
	}
	cout << "]" << endl;
}
