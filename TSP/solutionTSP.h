#ifndef SOLUTIONTSP_H
#define SOLUTIONTSP_H

#include <vector>
#include <iostream>

using namespace std;
namespace meta{
	
/**
* @brief Clase que representa una solucion para el problema del viajante de comercio.
* 
*/
class solutionTSP
{
private:
	
	/**
	 * @brief Vector de enteros que representa el orden de los nodos en el camino solucion.
	 * 
	 */
	vector<int> solution;
public:
	
	/**
	 * @brief Constructor vacio de la clase.
	 * 
	 */
	solutionTSP();
	
	/**
	 * @brief Constructor parametrizado. Crea un objeto solutionTSP a partir del vector pasado como parametro.
	 * 
	 * @param vector Vector de enteros que seran el orden de los nodos en el camino solucion.
	 */
	solutionTSP(vector<int> vector);
	
	/**
	 * @brief Destructor de la clase.
	 * 
	 */
	~solutionTSP();
	
	/**
	 * @brief Devuelve un vector de enteros que representa el orden de los nodos del camino solucion.
	 * 
	 * @return Vector de enteros del orden de los nodos.
	 */
	vector<int> getSolution();
	
	/**
	 * @brief Devuelve el tamaño del vector solucion de la clase.
	 * 
	 * @return Entero. Tamaño del vector.
	 */
	int getSize();
	
	/**
	 * @brief Devuelve el valor del vector solucin en la posicion dada. Ese valor representa el numero de nodos
	 * que se usa en el camino en el orden que representa la posicion.
	 * 
	 * @param position Entero. Posicion del valor a devolver del vector solucion.
	 * @return Entero. Numero de nodo que se encuentra en la posicion.
	 */
	int getValueOfPosition( int position);
	
	/**
	 * @brief Asigna un valor al vector solucion del objeto en la posicion pasada como parametro.
	 * 
	 * @param position Entero, Posicion del vector solucion.
	 * @param value Entero. Valor a meter en el vector. Representa el numero de nodo que ira en esa posocion en el camino.
	 */
	void setValueForPosition( int position, int value);
	
	/**
	 * @brief Imprime en pantalla la solucion del objeto de la clase.
	 * 
	 */
	void printSolution();
	
	/**
	 * @brief Sobrecarga del operador de asignacion.
	 * 
	 * @param sol Objeto de la clase solucion a copiar.
	 * @return meta::solutionTSP&
	 */
	solutionTSP& operator = (solutionTSP sol);
}; //Close of class

} //Close of namespace

#endif // SOLUTIONTSP_H
