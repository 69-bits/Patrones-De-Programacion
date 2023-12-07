#include "AbstractFactory.h" // Incluye el archivo de encabezado AbstractFactory.h
#include "Commons.h" // Incluye el archivo de encabezado Commos.h 

int 
main() {
  // Crear una instancia de la fábrica abstracta concreta
  AbstractFactory* AFactory = new ConcreteAbsFactory();

  // Crear productos utilizando la fábrica abstracta
  ProductA* productA = AFactory->crearProductoA();
  ProductB* productB = AFactory->crearProductoB();

  // Realizar operaciones en los productos creados
  productA->operationA();
  productB->operationB();

  // Liberar la memoria asignada
  delete AFactory;
  delete productA;
  delete productB;
}
