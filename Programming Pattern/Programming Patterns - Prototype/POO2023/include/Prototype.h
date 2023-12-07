#include "Prerequisites.h" // Incluye el archivo de Prerequisites.h

// Clase abstracta Prototype que define la interfaz del prototipo
class 
	Prototype {
public:
	virtual Prototype* clone() = 0; // M�todo para clonar el prototipo
	virtual void configurar(string _value) = 0; // M�todo para configurar el prototipo
	virtual void print() = 0; // M�todo para imprimir detalles del prototipo
};

// Clase concreta PrototipoConcreto que implementa la interfaz del prototipo
class 
	PrototipoConcreto : 
	public Prototype {
public:
	// M�todo para clonar el prototipo
	Prototype* clone() override {
		PrototipoConcreto* copy = new PrototipoConcreto();
		copy->configurar(m_value);
		return copy;
	}

	// M�todo para configurar el prototipo
	void configurar(string _value) override {
		m_value = _value;
	}

	// M�todo para imprimir detalles del prototipo
	void print() override {
		cout << "Value: " << m_value << endl;
	}

private:
	string m_value; // Variable para almacenar el valor del prototipo
};

