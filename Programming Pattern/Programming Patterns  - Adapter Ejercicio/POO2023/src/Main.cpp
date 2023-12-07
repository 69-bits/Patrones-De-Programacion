#include "Adapter.h"       // Incluye el archivo de encabezado Adapter.h 
#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

int main() {
  // Se crea un objeto de la interfaz vieja
  interfazVieja* ObjetoViejo = new interfazVieja();

  // Se crea un objeto de la interfaz nueva utilizando el adaptador
  InterfazNueva* ObjetoNuevo = new Adapter(ObjetoViejo);

  // Se llama al método de la interfaz nueva, que en realidad usa la lógica de la interfaz vieja a través del adaptador
  ObjetoNuevo->newMethod();

  // Se liberan los recursos asignados dinámicamente
  delete ObjetoViejo;
  delete ObjetoNuevo;

  return 0; // Indica una salida exitosa del programa
}
