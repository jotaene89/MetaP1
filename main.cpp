#include <iostream>
#include "InstanceKP.h"
#include "Knapsack.h"
#include "InstanceTSP.h"
#include "Node.h"
#include "SolGeneratorTSP.h"
#include "solutionTSP.h"

using namespace std;
using namespace meta;

int main(int argc, char **argv) {
	
	InstanceTSP grafo;
	SolGeneratorTSP solgentsp;
	
	grafo.loadFromFile("berlin52.tsp");
	
	solutionTSP vecprueba;
	vecprueba = solgentsp.randomSolution(10);
	vecprueba.printSolution();
	
}
