#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase abstracta Component que define la interfaz para los componentes
class 
  Component {
public:
  virtual void operacion() = 0; // M�todo virtual puro para la operaci�n
};

// Clase ConcreteComponent que implementa la interfaz del componente concreto
class 
  ConcreteComponent : 
  public Component {
public:
  void operacion() override {
    cout << "Operaci�n del componente concreto" << endl;
  }
};

// Clase Decorator que act�a como clase base para los decoradores
class 
  Decorator : 
  public Component {
public:
  Decorator(Component* _component)
    : m_component(_component) {}

  void operacion() override {
    m_component->operacion();
  }

private:
  Component* m_component; // Componente al cual se le a�adir�n funcionalidades
};

// Clase ConcreteDecoratorA que a�ade funcionalidades espec�ficas A al componente
class 
  ConcreteDecoratorA : 
  public Decorator {
public:
  ConcreteDecoratorA(Component* _component)
    : Decorator(_component) {}

  void operacion() override {
    Decorator::operacion();
    cout << "Operaci�n del decorador A" << endl;
  }
};

// Clase ConcreteDecoratorB que a�ade funcionalidades espec�ficas B al componente
class 
  ConcreteDecoratorB : 
  public Decorator {
public:
  ConcreteDecoratorB(Component* _component)
    : Decorator(_component) {}

  void operacion() override {
    Decorator::operacion();
    cout << "Operaci�n del decorador B" << endl;
  }
};


