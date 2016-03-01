#include "SolGeneratorTSP.h"

meta::SolGeneratorTSP::SolGeneratorTSP()
{

}

meta::SolGeneratorTSP::SolGeneratorTSP(Random* rand)
{
	this->rand = rand;
}

meta::SolGeneratorTSP::~SolGeneratorTSP()
{

}

meta::solutionTSP meta::SolGeneratorTSP::randomSolution(int n)
{
	vector<int> aux(n);
	vector<int> vector;
	
	for(int i=0; i<n; i++)
	{
		aux[i] = i;
	}

	for(int i=0; i<n; i++)
	{
		int pos = this->rand->Randint(0, aux.size()-1); //Genera una posicion aleatoria del vector
		vector.push_back(aux.at(pos)); //Añade el elemento de la posicion antes sacada al vector solucion
		aux.erase(aux.begin()+(pos)); //Elimina ese elemento del vector principal
	}
	
	solutionTSP solution(vector);
	return solution;
}
