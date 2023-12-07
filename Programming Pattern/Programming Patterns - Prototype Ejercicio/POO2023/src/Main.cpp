#include "Prototype.h"     // Incluye el archivo de encabezado Prototype.h 
#include "Prerequisites.h"  // Incluye el archivo de encabezado Prerequisites.h

int main() {
  // Configurar la versión original del prototipo de documento de texto
  DocumentoPrototype* prototipoTexto = new DocumentoTexto();
  prototipoTexto->configurar("Texto wuenardo");

  // Configurar la versión original del prototipo de documento de imagen
  DocumentoPrototype* prototipoImagen = new DocumentoImagen();
  prototipoImagen->configurar("Guayando.JPG");

  // Clonar los prototipos originales de texto e imagen
  DocumentoPrototype* copiaTexto = prototipoTexto->clone();
  DocumentoPrototype* copiaImagen = prototipoImagen->clone();

  // Modificar los prototipos originales
  prototipoTexto->configurar("Texto original");
  prototipoImagen->configurar("GuayandoOriginalNoFake.JPG");

  // Mostrar los detalles de los prototipos originales y sus copias
  prototipoTexto->clone()->mostrar();
  copiaTexto->mostrar();
  prototipoImagen->clone()->mostrar();
  copiaImagen->mostrar();

  // Liberar la memoria eliminando las instancias creadas
  delete prototipoTexto;
  delete prototipoImagen;
  delete copiaTexto;
  delete copiaImagen;

  return 0; // Indica una salida exitosa del programa
}
