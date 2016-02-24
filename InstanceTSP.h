#ifndef INSTANCETSP_H
#define INSTANCETSP_H

#include "Node.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <cmath>
#include "solutionTSP.h"

using namespace std;
namespace meta{
	
/**
* @brief Clase que representa una instancia del problema del viajante de comercio.
* 
*/
class InstanceTSP
{
private:
	
	/**
	 * @brief Vector de nodos del problema.
	 * 
	 */
	vector <Node> nodes;
	
	/**
	 * @brief Matriz de distancias entre los nodos.
	 * 
	 */
	vector < vector <double> > distances;
public:
	
	/**
	 * @brief Constructor vacio de la clase InstanceTSP.
	 * 
	 */
	InstanceTSP();
	
	/**
	 * @brief Destructor de la clase InstanceTSP.
	 * 
	 */
	~InstanceTSP();
	
	/**
	 * @brief Carga los datos de los nodos desde un fichero y genera la matriz de distancias.
	 * 
	 * @param name Nombre del fichero.
	 */
	void loadFromFile(string name);
	
	/**
	 * @brief Imprime la lista de nodos.
	 * 
	 */
	void printInstances();
	
	/**
	 * @brief Genera la matriz de distancias a partir de las posiciones de los nodos usando la distancia euclidea.
	 * 
	 */
	void generateDistances();
	
	/**
	 * @brief Calcula la distancia euclidea entre dos nodos.
	 * 
	 * @param n1 Nodo de partida.
	 * @param n2 Nodo de destino.
	 * @return Distancia euclidea entre los nodos. Double.
	 */
	double euclideanDistance(Node n1, Node n2);
	
	/**
	 * @brief Devuelve el nodo de la posicion n.
	 * 
	 * @param n Posicion de la lista de nodos.
	 * @return Nodo. Objeto de la clase Node.
	 */
	Node getNode(int n);
	
	/**
	 * @brief Imprime la matriz de distancias entre todos los nodos.
	 * 
	 */
	void printDistanceMatrix();
	
	/**
	 * @brief Comprueba la solucion del vector pasado por argumentos y da una medida de fitness.
	 * 
	 * @param solution Vector de enteros, de tamaño el numero de nodos del problema, con el orden de los nodos en la solucion.
	 * @return Medida de fitness. Distancia del camino de la solucion.
	 */
	double checkSolution(solutionTSP solution);
}; //Close of class

} //Close of namespace
#endif // INSTANCETSP_H
