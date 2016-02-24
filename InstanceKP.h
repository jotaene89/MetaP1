#ifndef INSTANCEKP_H
#define INSTANCEKP_H

#include <vector>
#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Knapsack.h"
#include "solutionKP.h"

using namespace std;
namespace meta{
	
/**
* @brief Clase para la creacion de las instancias del problema de la mochila.
* 
*/
class InstanceKP
{
private:
	/**
	 * @brief Vector de instancias del problema de la mochila.
	 * 
	 */
	vector< Knapsack> instances;
public:
	
	/**
	 * @brief Constructor vacio de la clase.
	 * 
	 */
	InstanceKP();
	
	/**
	 * @brief Destructor de la clase. Libera la memoria eliminando los datos del vector de instancias de la clase.
	 * 
	 */
	~InstanceKP();
	
	/**
	 * @brief Carga todas las instancias del problema de la mochila en el vector de instancias de la clase.
	 * 
	 * @param name Nombre del fichero desde el que cargar los datos.
	 * 
	 */
	void loadFromFile(string name);
	
	/**
	 * @brief Devuelve una instancia del vector de instancias del problema de la mochila cargadas desde un fichero.
	 * 
	 * @param n Entero que representa la posición de la instancia a devolver en el vector de instancias de la clase InstanceKP.
	 * @return Instancia completa (mochila) de la posicion n del vector de todas las instancias.
	 */
	Knapsack getInstance( unsigned int n);
	
	/**
	 * @brief Calcula el fitness de la solucion pasada como argumento a la instancia determinada en el otro argumento. Si el
	 * peso de la mochila se pasa del peso maximo permitido, el fitness sera penalizado por el sobrepeso de esta.
	 * 
	 * @param solution Vector booleano de tamaño igual al tamaño de la mochila. Una posicion true significa que el elemento
	 * de la instancia en esa posicion se usa para la solucion. En caso contrario, ese elemento no se usa en la mochila.
	 * @param instance Numero de instancia a la que se le aplicara la solucion.
	 * @return Medida de fitness del la solucion sobre la instancia.
	 */
	double checkSolution( solutionKP solution, int instance);
}; // close of class

} // close of namespace
#endif // INSTANCEKP_H
