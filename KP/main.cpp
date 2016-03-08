#include <iostream>
#include <cstring>
#include "InstanceKP.h"
#include "solutionKP.h"
#include "solGeneratorKP.h"
#include "Knapsack.h"
#include "../Random.h"
#include "../Timer.h"
#include <sstream>

#define SSTR( x ) static_cast< std::ostringstream & >( \
( std::ostringstream() << std::dec << x ) ).str()

using namespace std;
using namespace meta;

void guardarAptitudes(const std::vector< double >& fitness, std::string fichero);

int main(int argc, char **argv) {
	
	Random random;
	random.cambiaSemilla(seeds[1]);
	
	InstanceKP instance;
	solutionKP solution, bestSolution;
	SolGeneratorKP generator = SolGeneratorKP(&random);
	Knapsack mochila;
	int numInstancias;
	double bestFitness = 0;
	vector <double> fitness(1000);
	string nombreconst = "fitness_instancia_";
	
	cout << "Intruduzca el numero de instancias que se computaran: ";
	std::cin >> numInstancias;
	
	instance.loadFromFile("knapPI_1_200_10000.csv");
	
	for( int i = 0; i< numInstancias; i++)
	{
		mochila = instance.getInstance(i);
		
		for( int j = 0; j<1000; j++)
		{
			solution = generator.randomSolution(mochila.size());
			fitness[j] = instance.checkSolution(solution, i);
			if (fitness[j] >= bestFitness)
			{
				bestFitness = fitness[j];
				bestSolution = solution;
			}
		}
		string fichero = nombreconst + SSTR( i ) + ".dat";
		guardarAptitudes(fitness, fichero);
		cout << "La mejor solucion para la instancia " << i << " es: " << endl;
		bestSolution.printSolution();
		cout << "Fitness: " << bestFitness << endl;
		bestFitness = 0;
	}
	
}


void guardarAptitudes(const std::vector< double >& fitness, std::string fichero)
{
	std::ofstream salida;
	
	salida.open(fichero.c_str());
	if(!salida)
	{
		std::cout << "Error al abrir el fichero" << std::endl;
		exit(-1);
	}
	
	for(unsigned int i=0;i<fitness.size();i++)
	{
		salida << i << " " << fitness[i] << std::endl;
	}
	
	salida.close();
	
}