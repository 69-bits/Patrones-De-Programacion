#include "Commons.h" // Incluye el archivo de encabezado Commos.h 

// Clase base para productos A
class 
  ProductA {
public:
  virtual void operationA() = 0; // M�todo virtual puro para la operaci�n A
};

// Clase base para productos B
class 
  ProductB {
public:
  virtual void operationB() = 0; // M�todo virtual puro para la operaci�n B
};

// Clase abstracta para la f�brica abstracta
class 
  AbstractFactory {
public:
  virtual ProductA* crearProductoA() = 0; // M�todo virtual puro para crear ProductoA
  virtual ProductB* crearProductoB() = 0; // M�todo virtual puro para crear ProductoB
};

// Clase concreta para productos A
class 
  productA1 : 
  public ProductA {
public:
  void operationA() override {
    cout << "Operaci�n A en ProductoA1" << endl; // Implementaci�n de la operaci�n A para ProductA1
  }
};

// Clase concreta para productos B
class 
  productB1 : 
  public ProductB {
public:
  void operationB() override {
    cout << "Operaci�n B en ProductoB1" << endl; // Implementaci�n de la operaci�n B para ProductB1
  }
};

// Clase concreta para la f�brica abstracta

class 
  ConcreteAbsFactory : 
  public AbstractFactory {
public:
  ProductA* crearProductoA() override {
    return new productA1(); // Crear una instancia de ProductA1
  }
  ProductB* crearProductoB() override {
    return new productB1(); // Crear una instancia de ProductB1
  }
};