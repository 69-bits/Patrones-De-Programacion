#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Interfaz vieja que necesita ser adaptada
class 
  interfazVieja {
public:
  // M�todo de la interfaz vieja
  virtual void OldMethod() {
    cout << "M�todo viejo llamado" << endl;
  }
};

// Nueva interfaz con m�todos actualizados
class 
  InterfazNueva {
public:
  // M�todo de la nueva interfaz
  virtual void newMethod() {
    cout << "M�todo nuevo llamado" << endl;
  }
};

// Clase Adapter que adapta la interfaz vieja a la nueva interfaz
class 
  Adapter : 
  public InterfazNueva {
public:
  // Constructor que toma una instancia de la interfaz vieja
  Adapter(interfazVieja* _vieja) : m_interfazVieja(_vieja) {}

  // Implementaci�n del nuevo m�todo utilizando la interfaz vieja
  void newMethod() override {
    cout << "Adaptador llamado al m�todo nuevo" << endl;
    m_interfazVieja->OldMethod(); // Llama al m�todo de la interfaz vieja
  }

private:
  interfazVieja* m_interfazVieja; // Referencia a la interfaz vieja
};
