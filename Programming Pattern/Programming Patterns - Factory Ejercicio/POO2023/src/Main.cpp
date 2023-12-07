#include "Factory.h"   // Incluye el archivo de encabezado Factory.h
#include "Commons.h"   // Incluye el archivo de encabezado Commons.h

int main() {
  // Se crea una instancia de ConcreteFactoriaCoche (f�brica de coches)
  factoriaVehiculos* factoriaCoches = new ConcreteFactoriaCoche();

  // Se crea una instancia de ConcreteFactoriaBicicleta (f�brica de bicicletas)
  factoriaVehiculos* factoriaBicicletas = new ConcreteFactoriaBicicleta();

  // Se usa la f�brica de coches para crear un veh�culo (coche)
  Vehiculo* vehiculo = factoriaCoches->crearVehiculo();

  // Se usa la f�brica de bicicletas para crear otro veh�culo (bicicleta)
  Vehiculo* vehiculo2 = factoriaBicicletas->crearVehiculo();

  // Se llama al m�todo descripci�n() del veh�culo creado por la f�brica de coches (coche)
  vehiculo->descripcion();

  // Se llama al m�todo descripci�n() del veh�culo creado por la f�brica de bicicletas (bicicleta)
  vehiculo2->descripcion();

  // Se liberan los recursos al eliminar las instancias creadas
  delete factoriaCoches;
  delete vehiculo;

  return 0;  // Se devuelve 0 para indicar salida exitosa
}
