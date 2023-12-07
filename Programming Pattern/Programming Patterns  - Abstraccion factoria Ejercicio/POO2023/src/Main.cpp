#include "MuebleFactoria.h" // Incluye el archivo de encabezado MuebleFactoria.h
#include "Commons.h" // Incluye el archivo de encabezado Commons.h

int 
main() {
  // Se crea una f�brica de muebles r�sticos
  FactoriaMueblesRusticos* fabrica = new FactoriaMueblesRusticos;

  // Se crean una silla y una mesa r�sticas usando la f�brica r�stica
  Silla* sillaRustica = fabrica->crearSilla();
  Mesa* mesaRustica = fabrica->crearMesa();

  // Se muestra la descripci�n y el color de la silla r�stica
  sillaRustica->descripcion();
  sillaRustica->color();

  cout << "" << endl;

  // Se muestra la descripci�n y el color de la mesa r�stica
  mesaRustica->descripcion();
  mesaRustica->color();

  // Se liberan los recursos asignados din�micamente
  delete fabrica;
  delete sillaRustica;
  delete mesaRustica;

  return 0;
}
