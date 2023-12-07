#include "Decorator.h"     // Incluye el archivo de encabezado Decorator.h
#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

int main() {
  ConcreteComponent* objeto = new ConcreteComponent(); // Se crea un componente concreto

  ConcreteDecoratorA* decoratorA = new ConcreteDecoratorA(objeto); // Se crea un decorador A
  ConcreteDecoratorB* decoratorB = new ConcreteDecoratorB(decoratorA); // Se crea un decorador B

  objeto->operacion(); // Se llama a la operación del componente original
  decoratorA->operacion(); // Se llama a la operación del decorador A
  decoratorB->operacion(); // Se llama a la operación del decorador B

  delete objeto; // Se libera la memoria del componente concreto
  delete decoratorA; // Se libera la memoria del decorador A
  delete decoratorB; // Se libera la memoria del decorador B

  return 0; // Indica una salida exitosa del programa
}
