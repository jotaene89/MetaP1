#include <iostream>
#include "InstanceTSP.h"
#include "Node.h"
#include "SolGeneratorTSP.h"
#include "solutionTSP.h"
#include "../Random.h"
#include "../Timer.h"

using namespace std;
using namespace meta;

int main(int argc, char **argv) {
	
	Random random;
	random.cambiaSemilla(seeds[1]);

	InstanceTSP grafo;
	SolGeneratorTSP solgentsp = SolGeneratorTSP(&random);
	
	grafo.loadFromFile("berlin52.tsp");
	
	solutionTSP vecprueba;
	vecprueba = solgentsp.randomSolution(grafo.size());
	vecprueba.printSolution();
	double camino = grafo.checkSolution(vecprueba);
	cout << "La longitud del camino solucion es: " << camino << endl;
	vecprueba = solgentsp.randomSolution(grafo.size());
	vecprueba.printSolution();
	camino = grafo.checkSolution(vecprueba);
	cout << "La longitud del camino solucion es: " << camino << endl;
}
