#include "Knapsack.h"

meta::Knapsack::Knapsack()
{
	
}

meta::Knapsack::~Knapsack()
{
	this->elements.clear();
}

void meta::Knapsack::setWeight(int weight)
{
	this->max_weight = weight;
}

int meta::Knapsack::getWeight()
{
	return this->max_weight;
}

void meta::Knapsack::addElement(int value, int weight)
{
	vector <int> aux(2);
	aux[0] = value;
	aux[1] = weight;
	this->elements.push_back(aux);
}

vector<int> meta::Knapsack::getElement(unsigned int n)
{
	return this->elements[n];
}

int meta::Knapsack::getElementProfit(unsigned int n)
{
	//vector <int> aux = this->getElement(n);
	
	return this->elements[n][0];
}

int meta::Knapsack::getElementWeight(unsigned int n)
{
	//vector <int> aux = this->getElement(n);
	
	return this->elements[n][1];
}

void meta::Knapsack::printKnapsack()
{
	cout << "Elements of the Knapsack" << endl;
	for( unsigned int i=0; i<this->elements.size(); i++)
	{
		cout << "Valor = " << elements[i][0] << ", peso = " << elements[i][1] << endl;
	}
}

int meta::Knapsack::size()
{
	return this->elements.size();
}
