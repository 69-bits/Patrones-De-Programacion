#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h 

// Clase Cafeteria que representa el objeto que se va a decorar
class 
  Cafeteria {
public:
  // Método que prepara el café básico
  void prepararCafe() {
    cout << "Café preparado" << endl;
  }
};

// Clase abstracta Condimento que define la interfaz para los condimentos
class 
  Condimento {
public:
  virtual void decorar() = 0; // Método virtual puro para decorar
};

// Clase Leche que es un condimento y se encarga de decorar con leche
class 
  Leche : 
  public Condimento {
public:
  Leche(Cafeteria* _cafeteria)
    : m_leche(_cafeteria) {}

  // Método que decorará con leche
  void decorar() override {
    m_leche->prepararCafe(); // Prepara el café usando la cafetería base
    cout << "Leche agregada" << endl; // Agrega leche al café
  }

private:
  Cafeteria* m_leche; // Puntero al objeto Cafeteria
};

// Clase Azucar que es un condimento y se encarga de decorar con azúcar
class 
  Azucar : 
  public Condimento {
public:
  Azucar(Cafeteria* _cafeteria)
    : m_azucar(_cafeteria) {}

  // Método que decorará con azúcar
  void decorar() override {
    m_azucar->prepararCafe(); // Prepara el café usando la cafetería base
    cout << "Azúcar agregada" << endl; // Agrega azúcar al café
  }

private:
  Cafeteria* m_azucar; // Puntero al objeto Cafeteria
};
