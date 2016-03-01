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
	solutionKP solution;
	SolGeneratorKP generator = SolGeneratorKP(&random);
	Knapsack mochila;
	
	instance.loadFromFile("fichero.csv");
	mochila = instance.getInstance(0);
	solution = generator.randomSolution(mochila.size());
	solution.printSolution();
	double fitness = instance.checkSolution(solution, 0);
	cout << "El fitness es: " << fitness << endl;
	solution = generator.randomSolution(mochila.size());
	solution.printSolution();
	fitness = instance.checkSolution(solution, 0);
	cout << "El fitness es: " << fitness << endl;
}
