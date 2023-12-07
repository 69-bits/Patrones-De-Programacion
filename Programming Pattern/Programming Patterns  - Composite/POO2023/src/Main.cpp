#include "Composite.h"    // Incluye el archivo de encabezado Composite.h 
#include "Prerequisites.h"// Incluye el archivo de encabezado Prerequisites.h 

int main() {
  Leaf* hoja1 = new Leaf();      // Crea una instancia de la clase Leaf
  Leaf* hoja2 = new Leaf();      // Crea otra instancia de la clase Leaf
  Composite* composite = new Composite(); // Crea una instancia de la clase Composite

  composite->addLeaf(hoja1);     // Agrega hoja1 al Composite
  composite->addLeaf(hoja2);     // Agrega hoja2 al Composite

  composite->operacion();        // Realiza la operación en el Composite (muestra información)

  delete hoja1;                  // Libera la memoria de hoja1
  delete hoja2;                  // Libera la memoria de hoja2
  delete composite;              // Libera la memoria del composite

  return 0; // Indica una salida exitosa del programa
}
