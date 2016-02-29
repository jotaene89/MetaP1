#include "SolGeneratorTSP.h"

meta::SolGeneratorTSP::SolGeneratorTSP()
{

}

meta::SolGeneratorTSP::~SolGeneratorTSP()
{

}

meta::solutionTSP meta::SolGeneratorTSP::randomSolution(int n)
{
	Random random;
	random.cambiaSemilla(seeds[1]);
	
	Timer timer;
	vector<int> aux(n);
	vector<int> vector;
	
	for(int i=0; i<n; i++)
	{
		aux[i] = i;
	}
	cout << "Vector aux = [";
	for(unsigned int i=0; i<aux.size(); i++)
	{
		cout << aux[i] << " ";
	}
	cout << "]" << endl;

	for(int i=0; i<n; i++)
	{
		int pos = random.Randint(0, aux.size()-1);
		cout << "La posicion generada random es: " << pos << endl;
		vector.push_back(aux.at(pos));
		aux.erase(aux.begin()+(pos));
	}
	
	solutionTSP solution(vector);
	return solution;
}
