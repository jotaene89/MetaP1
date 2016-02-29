#include "solGeneratorKP.h"

meta::SolGeneratorKP::SolGeneratorKP()
{

}

meta::SolGeneratorKP::~SolGeneratorKP()
{

}

meta::solutionKP meta::SolGeneratorKP::randomSolution(int n)
{
	Random random;
	random.cambiaSemilla(seeds[1]);
	Timer timer;
	vector<bool> vector;

	for(int j=0; j<n; j++)
	{

		int valor = random.Randint(0, 1);
		
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
