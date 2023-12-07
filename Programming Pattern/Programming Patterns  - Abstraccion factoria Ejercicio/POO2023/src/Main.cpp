#include "MuebleFactoria.h" // Incluye el archivo de encabezado MuebleFactoria.h
#include "Commons.h" // Incluye el archivo de encabezado Commons.h

int 
main() {
  // Se crea una fábrica de muebles rústicos
  FactoriaMueblesRusticos* fabrica = new FactoriaMueblesRusticos;

  // Se crean una silla y una mesa rústicas usando la fábrica rústica
  Silla* sillaRustica = fabrica->crearSilla();
  Mesa* mesaRustica = fabrica->crearMesa();

  // Se muestra la descripción y el color de la silla rústica
  sillaRustica->descripcion();
  sillaRustica->color();

  cout << "" << endl;

  // Se muestra la descripción y el color de la mesa rústica
  mesaRustica->descripcion();
  mesaRustica->color();

  // Se liberan los recursos asignados dinámicamente
  delete fabrica;
  delete sillaRustica;
  delete mesaRustica;

  return 0;
}
