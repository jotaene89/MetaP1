#include "solGeneratorKP.h"

meta::SolGeneratorKP::SolGeneratorKP()
{

}

meta::SolGeneratorKP::SolGeneratorKP(Random* rand)
{
	this->rand = rand;
}

meta::SolGeneratorKP::~SolGeneratorKP()
{

}

meta::solutionKP meta::SolGeneratorKP::randomSolution(int n)
{
	vector<bool> vector;

	for(int j=0; j<n; j++)
	{

		int valor = this->rand->Randint(0, 1);
		
		if(valor == 1)
		{
			vector.push_back(true);
		}else{
			vector.push_back(false);
		}
		
	}

	solutionKP solution(vector);
	return solution;
}
