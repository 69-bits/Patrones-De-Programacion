#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase abstracta Component que define la interfaz para los componentes
class 
  Component {
public:
  virtual void operacion() = 0; // Método virtual puro para la operación
};

// Clase ConcreteComponent que implementa la interfaz del componente concreto
class 
  ConcreteComponent : 
  public Component {
public:
  void operacion() override {
    cout << "Operación del componente concreto" << endl;
  }
};

// Clase Decorator que actúa como clase base para los decoradores
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
  Component* m_component; // Componente al cual se le añadirán funcionalidades
};

// Clase ConcreteDecoratorA que añade funcionalidades específicas A al componente
class 
  ConcreteDecoratorA : 
  public Decorator {
public:
  ConcreteDecoratorA(Component* _component)
    : Decorator(_component) {}

  void operacion() override {
    Decorator::operacion();
    cout << "Operación del decorador A" << endl;
  }
};

// Clase ConcreteDecoratorB que añade funcionalidades específicas B al componente
class 
  ConcreteDecoratorB : 
  public Decorator {
public:
  ConcreteDecoratorB(Component* _component)
    : Decorator(_component) {}

  void operacion() override {
    Decorator::operacion();
    cout << "Operación del decorador B" << endl;
  }
};


