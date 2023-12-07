#include "Commons.h"  // Incluye un archivo.h commons

// Definicion de la clase abstracta Product
class 
  Product {
public:
  virtual void operacion() = 0;  // Funcion virtual pura que debe ser implementada por clases derivadas
};

// Definicion de la clase abstracta Factory
class 
  Factory {
public:
  virtual Product* crearProducto() = 0;  // Funcion virtual pura para la creacion de objetos de tipo Product
};

// Clase concreta ConcreteProduct que implementa la interfaz Product
class 
  ConcreteProduct : 
  public Product {
public:
  void operacion() override {
    // Implementacion espec�fica de la operaci�n para ConcreteProduct
    cout << "Realizando operaci�n en el producto concreto" << endl;
  }
};

// Clase concreta ConcreteFactory que implementa la interfaz Factory
class 
  ConcreteFactory : 
  public Factory {
public:
  Product* crearProducto() override {
    // Implementaci�n espec�fica para crear objetos de tipo ConcreteProduct
    return new ConcreteProduct();
  }
};
