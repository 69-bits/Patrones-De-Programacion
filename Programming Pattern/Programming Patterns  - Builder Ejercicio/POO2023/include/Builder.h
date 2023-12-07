#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase Pizza que representa una pizza con sus ingredientes
class 
  Pizza {
public:
  // Métodos para agregar diferentes ingredientes a la pizza

  // Agrega masa a la pizza con los ingredientes proporcionados
  void agregarMasa(const string& _ingredientes) {
    m_ingredientes.push_back(_ingredientes);
  }

  // Agrega salsa a la pizza con los ingredientes proporcionados
  void agregarSalsa(const string& _ingredientes) {
    m_ingredientes.push_back(_ingredientes);
  }

  // Agrega queso a la pizza con los ingredientes proporcionados
  void agregarQueso(const string& _ingredientes) {
    m_ingredientes.push_back(_ingredientes);
  }

  // Agrega un complemento a la pizza con los ingredientes proporcionados
  void agregarComplemento(const string& _ingredientes) {
    m_ingredientes.push_back(_ingredientes);
  }

  // Método para imprimir los ingredientes de la pizza
  void print() {
    cout << "Partes de la pizza: " << endl;
    for (int i = 0; i < m_ingredientes.size(); i++) {
      cout << m_ingredientes[i] << " ";
    }
    cout << endl;
  }

private:
  vector<string> m_ingredientes; // Almacena los ingredientes de la pizza
};

// Clase ConstructorPizza que define métodos para construir pizzas
class 
  ConstructorPizza {
public:
  // Métodos virtuales puros para construir diferentes partes de la pizza
  virtual void crearMasa() = 0;
  virtual void crearSalsa() = 0;
  virtual void crearQueso() = 0;
  virtual void crearComplemento() = 0;
  virtual Pizza* obtenerPizzaVegetariana() = 0;
  virtual Pizza* obtenerPizzaHawaiana() = 0;

  virtual ~ConstructorPizza() {} // Destructor virtual por precaución

private:
  // Se declara un destructor virtual para la clase base para permitir la
  // destrucción adecuada de instancias derivadas a través de punteros de clase base
};

// Clase ConstructorPizzaConcreto que implementa los métodos de construcción de pizzas
class 
  ConstructorPizzaConcreto : 
  public ConstructorPizza {
public:
  ConstructorPizzaConcreto() {
    // Se crean instancias de Pizza para la pizza Hawaiana y la Vegetariana
    m_pizzaHawaina = new Pizza();
    m_pizzaVegetariana = new Pizza();
  }

  // Implementación de los métodos de construcción de la pizza Hawaiana
  void crearMasa() override {
    m_pizzaHawaina->agregarMasa("Masa h");
  }

  void crearSalsa() override {
    m_pizzaHawaina->agregarSalsa("Salsa h");
  }

  void crearQueso() override {
    m_pizzaHawaina->agregarQueso("Queso h");
  }

  void crearComplemento() override {
    m_pizzaHawaina->agregarComplemento("Pina");
    m_pizzaHawaina->agregarComplemento("Jamon");
  }

  // Método para obtener una pizza Hawaiana creada
  Pizza* obtenerPizzaHawaiana() override {
    return m_pizzaHawaina;
  }

  // Implementación de los métodos de construcción de la pizza Vegetariana
  void crearMasa() override {
    m_pizzaVegetariana->agregarMasa("Masa v");
  }

  void crearSalsa() override {
    m_pizzaVegetariana->agregarSalsa("Salsa v");
  }

  void crearQueso() override {
    m_pizzaVegetariana->agregarQueso("Queso v");
  }

  void crearComplemento() override {
    m_pizzaVegetariana->agregarComplemento("Onions");
    m_pizzaVegetariana->agregarComplemento("Lechuga");
  }

  // Método para obtener una pizza Vegetariana creada
  Pizza* obtenerPizzaVegetariana() override {
    return m_pizzaVegetariana;
  }

private:
  Pizza* m_pizzaHawaina;       // Almacena la pizza Hawaiana
  Pizza* m_pizzaVegetariana;   // Almacena la pizza Vegetariana
};

// Clase Director que utiliza un ConstructorPizza para construir pizzas
class 
  Director {
public:
  // Constructor que toma un ConstructorPizza como argumento
  Director(ConstructorPizza* _pizza) :m_constructorPizza(_pizza) {}

  // Método para construir una pizza utilizando el ConstructorPizza proporcionado
  void Construir() {
    m_constructorPizza->crearMasa();
    m_constructorPizza->crearSalsa();
    m_constructorPizza->crearQueso();
    m_constructorPizza->crearComplemento();
  }

private:
  ConstructorPizza* m_constructorPizza; // Constructor utilizado por el Director
};