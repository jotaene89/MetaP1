#include <iostream>
#include "InstanceTSP.h"
#include "Node.h"
#include "SolGeneratorTSP.h"
#include "solutionTSP.h"
#include "../Random.h"
#include "../Timer.h"
#include <sstream>

#define SSTR( x ) static_cast< std::ostringstream & >( \
( std::ostringstream() << std::dec << x ) ).str()

using namespace std;
using namespace meta;

void guardarAptitudes(const std::vector< double >& caminos, std::string fichero);

int main(int argc, char **argv) {
	
	Random random;
	random.cambiaSemilla(seeds[1]);

	InstanceTSP grafo;
	SolGeneratorTSP generator = SolGeneratorTSP(&random);
	solutionTSP solution, bestSolution;
	vector <double> caminos(1000);
	double bestCamino;
	string fichero = "caminos.dat";
	
	grafo.loadFromFile("berlin52.tsp");
	
	for( int i = 0; i<1000; i++)
	{
		solution = generator.randomSolution(grafo.size());
		caminos[i] = grafo.checkSolution(solution);
		if (caminos[i] >= bestCamino)
		{
			bestCamino = caminos[i];
			bestSolution = solution;
		}
	}

	guardarAptitudes(caminos, fichero);
	cout << "La mejor solucion para el grafo es: " << endl;
	bestSolution.printSolution();
	cout << "Camino: " << bestCamino << endl;

}

void guardarAptitudes(const std::vector< double >& caminos, std::string fichero)
{
	std::ofstream salida;
	
	salida.open(fichero.c_str());
	if(!salida)
	{
		std::cout << "Error al abrir el fichero" << std::endl;
		exit(-1);
	}
	
	for(unsigned int i=0;i<caminos.size();i++)
	{
		salida << i << " " << caminos[i] << std::endl;
	}
	
	salida.close();
	
}
