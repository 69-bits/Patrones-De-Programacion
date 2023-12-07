#include "Commons.h" // Incluye el archivo de Commons.h

// Definición de la clase abstracta Vehiculo
class 
  Vehiculo {
public:
  virtual void descripcion() = 0; // Función virtual pura para describir el vehículo
};

// Definición de la clase abstracta factoriaVehiculos
class 
  factoriaVehiculos {
public:
  virtual Vehiculo* crearVehiculo() = 0; // Función virtual pura para crear vehículos
};

// Clase concreta Coche que implementa la interfaz Vehiculo
class 
  Coche : 
  public Vehiculo {
public:
  void descripcion() override {
    // Implementación específica de la descripción para Coche
    cout << "Soy un auto ahhhhh" << endl;
  }
};

// Clase concreta Bicicleta que implementa la interfaz Vehiculo
class 
  Bicicleta : 
  public Vehiculo {
public:
  void descripcion() override {
    // Implementación específica de la descripción para Bicicleta
    cout << "Soy una bicicleta tin tin" << endl;
  }
};

// Clase concreta ConcreteFactoriaCoche que implementa factoriaVehiculos
class 
  ConcreteFactoriaCoche : 
  public factoriaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    // Implementación específica para crear Coche
    return new Coche();
  }
};

// Clase concreta ConcreteFactoriaBicicleta que implementa factoriaVehiculos
class 
  ConcreteFactoriaBicicleta : 
  public factoriaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    // Implementación específica para crear Bicicleta
    return new Bicicleta();
  }
};
