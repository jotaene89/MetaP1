#ifndef NODE_H
#define NODE_H


namespace meta{
	
/**
* @brief Clase que representa un Nodo en un grafo.
* 
*/
class Node
{
private:
	
	/**
	 * @brief Numero de nodo.
	 * 
	 */
	int n;
	
	/**
	 * @brief Coordenada x del nodo.
	 * 
	 */
	double x;
	
	/**
	 * @brief Coordenada y del nodo.
	 * 
	 */
	double y;
public:
	
	/**
	 * @brief Constructor vacío de la clase nodo.
	 * 
	 */
	Node();
	
	/**
	 * @brief Destructor de la clase nodo.
	 * 
	 */
	~Node();
	
	/**
	 * @brief Constructor parametrizado de la clase nodo. Crea un nodo con un numero y coordenadas.
	 * 
	 * @param n Numero de nodo.
	 * @param x Coordenada x del nodo.
	 * @param y Coordenada y del nodo.
	 */
	Node(const int n, const double x, const double y);
	
	/**
	 * @brief Observador de la clase que devuelve el numero del nodo.
	 * 
	 * @return Numero de nodo. Entero.
	 */
	int getN();
	
	/**
	 * @brief Observador de la clase que devuelve la coordenada X del nodo.
	 * 
	 * @return Coordenada x del nodo. Double.
	 */
	double getX();
	
	/**
	 * @brief Observador de la clase que devuelve la coordenada Y del nodo.
	 * 
	 * @return Coordenada y del nodo. Double.
	 */
	double getY();
	
	/**
	 * @brief Modificador de la clase que asigna un numero de nodo.
	 * 
	 * @param n Numero de nodo.
	 */
	void setN(const int n);
	
	/**
	 * @brief Modificador de la clase que asigna una coordenada X.
	 * 
	 * @param x Coordenada x del nodo.
	 */
	void setX(const double x);
	
	/**
	 * @brief Modificador de la clase que asigna una coordenada Y.
	 * 
	 * @param y Coordenada y del nodo.
	 */
	void setY(const double y);
}; //Close of class

} //Close of namespace
#endif // NODE_H
