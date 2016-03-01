#ifndef SOLGENERATORKP_H
#define SOLGENERATORKP_H

#include <vector>
#include "InstanceKP.h"
#include "solutionKP.h"
#include "../Random.h"
#include "../Timer.h"

using namespace std;
namespace meta{

/**
* @brief Clase que genera soluciones para el problema del viajante de comercio.
*
*/
class SolGeneratorKP
{
private:

	/**
	 * @brief Puntero al objeto random inicializado para generar aleatoriamente.
	 * 
	 */
	Random* rand;
	
public:
	/**
	* @brief Constructor vacio de la clase.
	*
	*/
	SolGeneratorKP();
	
	/**
	 * @brief Constructor parametrizado con una referencia al objeto Random inicializado con una semilla en el main.
	 * 
	 * @param rand Puntero al objeto Random inicializado.
	 */
	SolGeneratorKP(Random* rand);
	
	/**
	* @brief Destructor de la clase.
	*
	*/
	~SolGeneratorKP();

	/**
	* @brief Genera una solucion aleatoria para el problema de la mochila. Genera un 		vector de enteros del tamaño del numero de materiales de la mochila.
	*
	* @param n Numero de materiales del problema. Sera el tamaño del vector solucion.
	* @return Objeto de la clase solutionKP con el vector solucion.
	*/
	solutionKP randomSolution( int n);

}; //Close of class

} //Close of namespace

#endif // SOLGENERATORKP_H

/*
//

fitness=0;

vector solucion[1000]

para Mochila0 hasta mochilaX
	
	para solRandom0 hasta solRandom1000
	
		para pos0 hasta mochila[x].size()
	
			si mochila[x].usado[pos]=1

				solucion[solRandomX] += mochila[i].getweight[pos]		

*/
