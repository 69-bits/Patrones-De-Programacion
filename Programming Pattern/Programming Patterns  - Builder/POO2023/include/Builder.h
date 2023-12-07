#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase BProduct que representa el producto construido por el Builder
class 
  BProduct {
public:
  // Agrega una parte al producto
  void agregarParte(const string& _parte) {
    m_partes.push_back(_parte);
  }

  // Imprime las partes del producto
  void print() {
    cout << "Partes del producto: " << endl;
    for (int i = 0; i < m_partes.size(); i++) {
      cout << m_partes[i] << " ";
    }
  }

private:
  vector<string> m_partes; // Almacena las partes del producto
};

// Clase Builder que define la interfaz para la construcci�n de productos
class 
  Builder {
public:
  // M�todos virtuales puros para construir partes del producto
  virtual void buildParteA() = 0;
  virtual void buildParteB() = 0;
  virtual BProduct* obtenerProducto() = 0;

  virtual ~Builder() {} // Destructor virtual por precauci�n
};

// Clase BuilderConcrete que implementa la construcci�n de partes concretas del producto
class 
  BuilderConcrete : 
  public Builder {
public:
  BuilderConcrete() {
    m_producto = new BProduct();
  }

  // Implementaci�n de la construcci�n de la Parte A del producto
  void buildParteA() override {
    m_producto->agregarParte("Parte A");
  }

  // Implementaci�n de la construcci�n de la Parte B del producto
  void buildParteB() override {
    m_producto->agregarParte("Parte B");
  }

  // M�todo para obtener el producto construido
  BProduct* obtenerProducto() override {
    return m_producto;
  }

private:
  BProduct* m_producto; // Almacena el producto construido
};

// Clase Director que utiliza un Builder para construir un producto
class 
  Director {
public:
  // Constructor que toma un Builder como argumento
  Director(Builder* _builder) : m_builder(_builder) {}

  // M�todo para construir el producto utilizando el Builder proporcionado
  void build() {
    m_builder->buildParteA();
    m_builder->buildParteB();
  }

private:
  Builder* m_builder; // Builder utilizado por el Director
};
