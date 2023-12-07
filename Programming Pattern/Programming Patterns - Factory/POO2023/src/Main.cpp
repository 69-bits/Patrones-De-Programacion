#include "RegistroActividad.h"  // Incluye el archivo de encabezado para Registro de Actividad 
#include "Commons.h"  // Incluye el archivo de Commons 

// Funcion principal del programa
int main() {
  // Se crea una instancia de ConcreteFactory (clase concreta que implementa Factory)
  Factory* factory = new ConcreteFactory();

  // Se utiliza la fábrica para crear un producto
  Product* product = factory->crearProducto();

  // Se llama al método operacion() del producto creado
  product->operacion();

  // Se liberan los recursos al eliminar las instancias creadas
  delete factory;
  delete product;

  return 0;  // Se devuelve 0 para indicar salida exitosa
}
