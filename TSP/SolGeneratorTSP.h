#ifndef SOLGENERATORTSP_H
#define SOLGENERATORTSP_H

#include <vector>
#include "InstanceTSP.h"
#include "solutionTSP.h"
#include "../Random.h"
#include "../Timer.h"

using namespace std;
namespace meta{

/**
* @brief Clase que genera soluciones para el problema del viajante de comercio.
* 
*/
class SolGeneratorTSP
{
private:
	
public:
	
	/**
	 * @brief Constructor vacio de la clase.
	 * 
	 */
	SolGeneratorTSP();
	
	/**
	 * @brief Destructor de la clase.
	 * 
	 */
	~SolGeneratorTSP();
	
	/**
	 * @brief Genera una solucion aleatoria para el problema del viajante de caminos. Genera un vector de enteros del tamaño
	 * del numero de nodos del problema y luego permuta el orden de forma aleatoria.
	 * 
	 * @param n Numero de nodos del problema. Sera el tamaño del vector de permutaciones a generar.
	 * @return Objeto de la clase solutionTSP con el vector solucion.
	 */
	solutionTSP randomSolution( int n);
}; //Close of class

} //Close of namespace
#endif // SOLGENERATORTSP_H
