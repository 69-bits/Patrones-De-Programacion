#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h 

// Clase Cafeteria que representa el objeto que se va a decorar
class 
  Cafeteria {
public:
  // M�todo que prepara el caf� b�sico
  void prepararCafe() {
    cout << "Caf� preparado" << endl;
  }
};

// Clase abstracta Condimento que define la interfaz para los condimentos
class 
  Condimento {
public:
  virtual void decorar() = 0; // M�todo virtual puro para decorar
};

// Clase Leche que es un condimento y se encarga de decorar con leche
class 
  Leche : 
  public Condimento {
public:
  Leche(Cafeteria* _cafeteria)
    : m_leche(_cafeteria) {}

  // M�todo que decorar� con leche
  void decorar() override {
    m_leche->prepararCafe(); // Prepara el caf� usando la cafeter�a base
    cout << "Leche agregada" << endl; // Agrega leche al caf�
  }

private:
  Cafeteria* m_leche; // Puntero al objeto Cafeteria
};

// Clase Azucar que es un condimento y se encarga de decorar con az�car
class 
  Azucar : 
  public Condimento {
public:
  Azucar(Cafeteria* _cafeteria)
    : m_azucar(_cafeteria) {}

  // M�todo que decorar� con az�car
  void decorar() override {
    m_azucar->prepararCafe(); // Prepara el caf� usando la cafeter�a base
    cout << "Az�car agregada" << endl; // Agrega az�car al caf�
  }

private:
  Cafeteria* m_azucar; // Puntero al objeto Cafeteria
};
