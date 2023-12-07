#include "Factory.h"   // Incluye el archivo de encabezado Factory.h
#include "Commons.h"   // Incluye el archivo de encabezado Commons.h

int main() {
  // Se crea una instancia de ConcreteFactoriaCoche (fábrica de coches)
  factoriaVehiculos* factoriaCoches = new ConcreteFactoriaCoche();

  // Se crea una instancia de ConcreteFactoriaBicicleta (fábrica de bicicletas)
  factoriaVehiculos* factoriaBicicletas = new ConcreteFactoriaBicicleta();

  // Se usa la fábrica de coches para crear un vehículo (coche)
  Vehiculo* vehiculo = factoriaCoches->crearVehiculo();

  // Se usa la fábrica de bicicletas para crear otro vehículo (bicicleta)
  Vehiculo* vehiculo2 = factoriaBicicletas->crearVehiculo();

  // Se llama al método descripción() del vehículo creado por la fábrica de coches (coche)
  vehiculo->descripcion();

  // Se llama al método descripción() del vehículo creado por la fábrica de bicicletas (bicicleta)
  vehiculo2->descripcion();

  // Se liberan los recursos al eliminar las instancias creadas
  delete factoriaCoches;
  delete vehiculo;

  return 0;  // Se devuelve 0 para indicar salida exitosa
}
