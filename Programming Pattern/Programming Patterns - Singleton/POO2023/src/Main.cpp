#include "RegistroActividad.h" // Incluye el archivo de encabezado RegistroActividad.h
#include "Commons.h"          // Incluye el archivo de encabezado Commons.h

RegistroActividad* RegistroActividad::m_instance = nullptr; // Inicialización de la instancia única a nullptr

int main() {
  // Obtiene la instancia única del RegistroActividad
  RegistroActividad* RegistroAct1 = RegistroActividad::getInstance();

  // Registra varias actividades usando la instancia 1
  RegistroAct1->setActivity("Activo");
  RegistroAct1->setActivity("Andando");
  RegistroAct1->setActivity("Armando");
  RegistroAct1->setActivity("Acabando");
  RegistroAct1->setActivity("A finalizar");

  // Obtiene la instancia única del RegistroActividad (la misma que la instancia 1)
  RegistroActividad* RegistroAct2 = RegistroActividad::getInstance();

  // Muestra las actividades registradas usando la instancia 2
  RegistroAct2->getActivity();

  return 0; // Indica una salida exitosa del programa
}
