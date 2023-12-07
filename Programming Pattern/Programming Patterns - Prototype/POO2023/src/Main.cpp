#include "Prototype.h"     // Incluye el archivo de Prototype.h 
#include "Prerequisites.h"  // Incluye el archivo de Prerequisites.h 

int main() {
  // Configurar la versi�n original del prototipo
  Prototype* prototype = new PrototipoConcreto();
  prototype->configurar("Jhan");

  // Clonar la versi�n original del prototipo
  Prototype* copia = prototype->clone();

  // Imprimir los detalles de la versi�n original y su copia
  prototype->print();
  copia->print();

  // Liberar la memoria al eliminar las instancias creadas
  delete prototype;
  delete copia;

  return 0;  // Indica una salida exitosa del programa
}
