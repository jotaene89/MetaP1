#include <iostream>
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
	vecprueba = solgentsp.randomSolution(grafo.size());
	vecprueba.printSolution();
	double camino = grafo.checkSolution(vecprueba);
	cout << "La longitud del camino solucion es: " << camino << endl;
}
