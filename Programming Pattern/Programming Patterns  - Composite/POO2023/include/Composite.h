#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase Componente que define la interfaz para componentes individuales y compuestos
class 
  Component {
public:
  virtual void operacion() = 0; // M�todo virtual puro para la operaci�n
};

// Clase Leaf que representa componentes individuales
class Leaf :
  public Component {
public:
  void operacion() override {
    cout << "Operaci�n en hoja" << endl;
  }
};

// Clase Composite que representa componentes compuestos
class 
  Composite : 
  public Component {
public:
  void operacion() override {
    cout << "Operaci�n composite. Contiene: " << m_leafs.size() << " leafs." << endl;

    // Realiza la operaci�n para cada hoja (Leaf) dentro del Composite
    for (auto hoja : m_leafs) {
      hoja->operacion();
    }
  }

  // Agrega una hoja (Leaf) al Composite
  void addLeaf(Component* _leaf) {
    m_leafs.push_back(_leaf);
  }

private:
  vector<Component*> m_leafs; // Almacena las hojas (Leaf) dentro del Composite
};
