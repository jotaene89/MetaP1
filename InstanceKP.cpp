#include "InstanceKP.h"

meta::InstanceKP::InstanceKP()
{
	
}

meta::InstanceKP::~InstanceKP()
{
	this->instances.clear();
}

void meta::InstanceKP::loadFromFile(string name)
{
	ifstream file(name.c_str());
	string line;
	int count = 0;
	
	do{
		getline(file, line);
		size_t found = line.find("knapPI");
		if(found!=string::npos)
		{
			Knapsack instance;
			getline(file, line);
			int n;
			char * pch;
			pch = strtok((char *)line.c_str()," ");
			pch = strtok(NULL, " ");
			n = atoi(pch);
			int c;
			getline(file, line);
			pch = strtok((char *)line.c_str()," ");
			pch = strtok(NULL, " ");
			c = atoi(pch);
			instance.setWeight(c);
			getline(file, line);
			
			getline(file, line);
			for(int i = 0; i<n ; i++)
			{
				int valor, peso;
				getline(file, line);
				pch = strtok((char *)line.c_str(), ",");
				pch = strtok(NULL, ",");
				valor = atoi(pch);
				pch = strtok(NULL, ",");
				peso = atoi(pch);
				instance.addElement(valor, peso);
			}
			getline(file, line);
			this->instances.push_back(instance);
			count ++;
		}
		else
		{
			break;
		}
	}while(getline(file,line));
}

meta::Knapsack meta::InstanceKP::getInstance(unsigned int n)
{
	return this->instances[n];
}

double meta::InstanceKP::checkSolution(solutionKP solution, int instance)
{
	double weight=0;
	double overWeightProfit=0;
	double fitness=0;
	Knapsack mochila = this->getInstance(instance);
	
	for(int i = 0; i< solution.getSize(); i++)
	{
		overWeightProfit += mochila.getElement(i)[0];
		if (solution.getValueOfPosition(i) == true)
		{
			weight += mochila.getElement(i)[1];
			fitness += mochila.getElement(i)[0];
		}
	}
	
	if(weight > mochila.getWeight())
	{
		//Penalizar el fitness por el sobrepeso de la mochila
		fitness -= overWeightProfit;
	}
	
	return fitness;
}

