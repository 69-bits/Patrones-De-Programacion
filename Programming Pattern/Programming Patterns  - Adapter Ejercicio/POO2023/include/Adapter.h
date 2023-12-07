#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Interfaz vieja que necesita ser adaptada
class 
  interfazVieja {
public:
  // Método de la interfaz vieja
  virtual void OldMethod() {
    cout << "Método viejo llamado" << endl;
  }
};

// Nueva interfaz con métodos actualizados
class 
  InterfazNueva {
public:
  // Método de la nueva interfaz
  virtual void newMethod() {
    cout << "Método nuevo llamado" << endl;
  }
};

// Clase Adapter que adapta la interfaz vieja a la nueva interfaz
class 
  Adapter : 
  public InterfazNueva {
public:
  // Constructor que toma una instancia de la interfaz vieja
  Adapter(interfazVieja* _vieja) : m_interfazVieja(_vieja) {}

  // Implementación del nuevo método utilizando la interfaz vieja
  void newMethod() override {
    cout << "Adaptador llamado al método nuevo" << endl;
    m_interfazVieja->OldMethod(); // Llama al método de la interfaz vieja
  }

private:
  interfazVieja* m_interfazVieja; // Referencia a la interfaz vieja
};
