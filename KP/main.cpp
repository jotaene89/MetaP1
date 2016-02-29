#include <iostream>
#include "InstanceKP.h"
#include "solutionKP.h"
#include "solGeneratorKP.h"
#include "Knapsack.h"

using namespace std;
using namespace meta;

int main(int argc, char **argv) {
	
	InstanceKP instance;
	solutionKP solution;
	SolGeneratorKP generator;
	Knapsack mochila;
	
	instance.loadFromFile("fichero.csv");
	mochila = instance.getInstance(0);
	solution = generator.randomSolution(mochila.size());
	solution.printSolution();
	double fitness = instance.checkSolution(solution, 0);
	cout << "El fitness es: " << fitness << endl;
}
