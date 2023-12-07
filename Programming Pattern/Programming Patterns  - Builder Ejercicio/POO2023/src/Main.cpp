#include "Builder.h"       // Incluye el archivo de encabezado Builder.h
#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

int 
main() {
  // Se crea un ConstructorPizzaConcreto y se pasa al Director
  ConstructorPizza* constructor = new ConstructorPizzaConcreto();
  Director director(constructor);

  // El Director construye las pizzas utilizando el ConstructorPizza
  director.Construir();

  // Se obtienen y muestran las pizzas construidas
  Pizza* pizzaHawa = constructor->obtenerPizzaHawaiana();
  pizzaHawa->print();
  Pizza* pizzaVeggie = constructor->obtenerPizzaVegetariana();
  pizzaVeggie->print();

  // Se liberan los recursos asignados dinámicamente
  delete constructor;
  delete pizzaHawa;
  delete pizzaVeggie;

  return 0; // Indica una salida exitosa del programa
}
