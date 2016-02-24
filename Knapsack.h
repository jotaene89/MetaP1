#ifndef KNAPSACK_H
#define KNAPSACK_H

#include <vector>
#include <iostream>

using namespace std;
namespace meta{

/**
* @brief Clase Knapsack (mochila) que representa una instancia del problema de la mochila.
* 
*/
class Knapsack
{
private:
	
	/**
	 * @brief Peso maximo que puede soportar la mochila.
	 * 
	 */
	int max_weight;
	
	/**
	 * @brief Matriz [Nx2] de los elementos del problema. N es el numero de elementos. La primera columna es el valor del elementos
	 * y la segunda es el peso de ese elemento.
	 * 
	 */
	vector < vector <int> > elements;
public:
	
	/**
	 * @brief Constructor vacio del objeto Knapsack (mochila).
	 * 
	 */
	Knapsack();
	
	/**
	 * @brief Destructor del objeto Knapsack (mochila). Se encarga de eliminar la matriz de elementos del objeto para liberar
	 * la memoria.
	 * 
	 */
	~Knapsack();
	
	/**
	 * @brief Modificador de la clase para asignar un valor de peso maximo a la instancia del problema de la mochila.
	 * 
	 * @param weight Valor de peso maximo de la mochila.
	 * 
	 */
	void setWeight( int weight);
	
	/**
	 * @brief Devuelve el peso maximo de la mochila de la instancia.
	 * 
	 * @return Peso maximo de la mochila de la instancia. Entero.
	 */
	int getWeight();
	
	/**
	 * @brief Añade un elemento nuevo al vector de elementos del problema de la mochila.
	 * 
	 * @param value Valor (precio) del elemento.
	 * @param weight Peso del elemento.
	 * 
	 */
	void addElement( int value, int weight);
	
	/**
	 * @brief Observador de la clase. Devuelve el elemento n-esimo del vector de la lista de elementos de la instancia.
	 * 
	 * @param n Posicion del elemento a devolver.
	 * @return vector [1x2] con el valor (precio) del elemento en la primera posicion y el peso en la segunda posicion.
	 */
	vector <int> getElement(unsigned int n);
	
	/**
	 * @brief Imprime todos los elementos de la instancia.
	 * 
	 */
	void printKnapsack();
	
}; // close of class

} // close of namespace

#endif // KNAPSACK_H
