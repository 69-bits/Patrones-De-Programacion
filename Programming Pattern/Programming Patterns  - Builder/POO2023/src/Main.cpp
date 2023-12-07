#include "Builder.h"       // Incluye el archivo de encabezado Builder.h
#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

int main() {
  // Se crea un BuilderConcrete y se pasa al Director
  Builder* constructor = new BuilderConcrete();
  Director director(constructor);

  // El Director utiliza el Builder para construir el producto
  director.build();

  // Se obtiene y muestra el producto construido
  BProduct* producto = constructor->obtenerProducto();
  producto->print();

  // Se liberan los recursos asignados dinámicamente
  delete constructor;
  delete producto;

  return 0; // Indica una salida exitosa del programa
}
