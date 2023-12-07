#include "Commons.h" // Incluye el archivo de Commons.h

// Definici�n de la clase abstracta Vehiculo
class 
  Vehiculo {
public:
  virtual void descripcion() = 0; // Funci�n virtual pura para describir el veh�culo
};

// Definici�n de la clase abstracta factoriaVehiculos
class 
  factoriaVehiculos {
public:
  virtual Vehiculo* crearVehiculo() = 0; // Funci�n virtual pura para crear veh�culos
};

// Clase concreta Coche que implementa la interfaz Vehiculo
class 
  Coche : 
  public Vehiculo {
public:
  void descripcion() override {
    // Implementaci�n espec�fica de la descripci�n para Coche
    cout << "Soy un auto ahhhhh" << endl;
  }
};

// Clase concreta Bicicleta que implementa la interfaz Vehiculo
class 
  Bicicleta : 
  public Vehiculo {
public:
  void descripcion() override {
    // Implementaci�n espec�fica de la descripci�n para Bicicleta
    cout << "Soy una bicicleta tin tin" << endl;
  }
};

// Clase concreta ConcreteFactoriaCoche que implementa factoriaVehiculos
class 
  ConcreteFactoriaCoche : 
  public factoriaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    // Implementaci�n espec�fica para crear Coche
    return new Coche();
  }
};

// Clase concreta ConcreteFactoriaBicicleta que implementa factoriaVehiculos
class 
  ConcreteFactoriaBicicleta : 
  public factoriaVehiculos {
public:
  Vehiculo* crearVehiculo() override {
    // Implementaci�n espec�fica para crear Bicicleta
    return new Bicicleta();
  }
};
