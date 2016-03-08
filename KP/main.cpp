#include <iostream>
#include "InstanceKP.h"
#include "solutionKP.h"
#include "solGeneratorKP.h"
#include "Knapsack.h"
#include "../Random.h"
#include "../Timer.h"

using namespace std;
using namespace meta;

int main(int argc, char **argv) {
	
	Random random;
	random.cambiaSemilla(seeds[1]);
	
	InstanceKP instance;
	solutionKP solution, bestSolution;
	SolGeneratorKP generator = SolGeneratorKP(&random);
	Knapsack mochila;
	int numInstancias;
	double fitness = 0, bestFitness = 0;
	
	cout << "Intruduzca el numero de instancias que se computaran: ";
	std::cin >> numInstancias;
	
	instance.loadFromFile("knapPI_1_200_10000.csv");
	
	for( int i = 0; i< numInstancias; i++)
	{
		mochila = instance.getInstance(i);
		
		for( int j = 0; j<1000; j++)
		{
			solution = generator.randomSolution(mochila.size());
			fitness = instance.checkSolution(solution, i);
			if (fitness >= bestFitness)
			{
				bestFitness = fitness;
				bestSolution = solution;
			}
		}
	}
	
	cout << "La mejor solucion es: " << endl;
	bestSolution.printSolution();
	cout << "Fitness: " << bestFitness << endl;
}
