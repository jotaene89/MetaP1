#ifndef SOLUTIONKP_H
#define SOLUTIONKP_H

#include <vector>
#include <iostream>

using namespace std;
namespace meta{
	
/**
* @brief Clase que representa una solucion del problema de la mochila.
* 
*/
class solutionKP
{
private:
	
	/**
	 * @brief Vector de bool que representa los elementos que entran en la mochila.
	 * 
	 */
	vector<bool> solution;
public:
	
	/**
	 * @brief Constructor vacío de la clase.
	 * 
	 */
	solutionKP();
	
	/**
	 * @brief Constructor parametrizado. El vector pasado como parametro se asigna al vector de solucion de la clase.
	 * 
	 * @param vec Vector booleano de tamaño igual que el numero de nodos.
	 */
	solutionKP(vector<bool> vec);
	
	/**
	 * @brief Destructor de la clase.
	 * 
	 */
	~solutionKP();
	
	/**
	 * @brief Observador de la clase. Devuelve el vector de bool de la solucion.
	 * 
	 * @return Vector booleano de la solucion.
	 */
	vector<bool> getSolution();
	
	/**
	 * @brief Devuelve el tamaño del vector solucion de la clase.
	 * 
	 * @return Entero. Tamaño del vector.
	 */
	int getSize();
	
	/**
	 * @brief Asigna un valor a la posicion determinada en el vector de solucion.
	 * 
	 * @param position Posicion a la que asignar el valor.
	 * @param value Bool. Valor a asignar a esa posicion
	 */
	void setValueForPosition( int position, bool value);

	/**
	 * @brief Devuelve el valor del vector de solucion de la posicion pasada por argumentos.
	 * 
	 * @param position Posicion del vector.
	 * @return Bool. Valor del vector solucion en la posicion dada.
	 */
	bool getValueOfPosition( int position);
	
	/**
	 * @brief Muestra por pantalla el vector de solucion de la clase.
	 * 
	 */
	void printSolution();
	
	/**
	 * @brief Asigna un vector solucion a la clase solucion
	 * 
	 * @param vect Vector con una solucion a asignar
	 */
	void setSolution(vector<bool> vect);
	
	/**
	 * @brief Sobrecarga del operador de asignación.
	 * 
	 * @param sol Objeto de la clase solutionKP a asignar.
	 * @return meta::solutionKP&
	 */
	solutionKP& operator = (solutionKP sol);
};

}
#endif // SOLUTIONKP_H
