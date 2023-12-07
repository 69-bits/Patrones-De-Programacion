#include "Composite.h"    // Incluye el archivo de encabezado Composite.h 
#include "Prerequisites.h"// Incluye el archivo de encabezado Prerequisites.h

int main() {
  // Crear dos archivos en el sistema
  SistemaArchivo* archivo1 = new SistemaArchivo();
  SistemaArchivo* archivo2 = new SistemaArchivo();

  // Crear una carpeta en el sistema
  SistemaCarpeta* carpeta = new SistemaCarpeta();

  // Agregar los archivos a la carpeta
  carpeta->agregarCarpeta(archivo1);
  carpeta->agregarCarpeta(archivo2);

  // Mostrar información de la carpeta y sus elementos (archivos)
  carpeta->mostrarInfo();

  // Liberar memoria al eliminar las instancias creadas
  delete archivo1;
  delete archivo2;
  delete carpeta;

  return 0; // Indica una salida exitosa del programa
}
