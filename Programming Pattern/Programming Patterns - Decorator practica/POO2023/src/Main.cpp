#include "Decorator.h"     // Incluye el archivo de encabezado Decorator.h 
#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h 

int main() {
  Cafeteria* cafeteria = new Cafeteria(); // Se crea una instancia de Cafeteria

  Leche* cafeLeche = new Leche(cafeteria); // Se crea una instancia de Leche decorando la Cafeteria
  Azucar* cafeAzucar = new Azucar(cafeteria); // Se crea una instancia de Azucar decorando la Cafeteria

  cafeteria->prepararCafe(); // Se prepara el café básico en la Cafeteria

  cafeLeche->decorar(); // Se decora el café con leche
  cafeAzucar->decorar(); // Se decora el café con azúcar

  delete cafeteria; // Se libera la memoria de la Cafeteria
  delete cafeLeche; // Se libera la memoria del decorador de leche
  delete cafeAzucar; // Se libera la memoria del decorador de azúcar

  return 0; // Indica una salida exitosa del programa
}
