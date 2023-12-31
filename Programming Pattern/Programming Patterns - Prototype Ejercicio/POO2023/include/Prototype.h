#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase abstracta DocumentoPrototype que define la interfaz del prototipo de documento
class 
  DocumentoPrototype {
public:
  virtual DocumentoPrototype* clone() = 0; // M�todo para clonar el prototipo de documento
  virtual void configurar(string _value) = 0; // M�todo para configurar el prototipo de documento
  virtual void mostrar() = 0; // M�todo para mostrar detalles del prototipo de documento
};

// Clase concreta DocumentoTexto que implementa la interfaz del prototipo de documento
class 
  DocumentoTexto : 
  public DocumentoPrototype {
public:
  // M�todo para clonar el prototipo de documento de texto
  DocumentoPrototype* clone() override {
    DocumentoTexto* copy = new DocumentoTexto();
    copy->configurar(m_value);
    return copy;
  }

  // M�todo para configurar el prototipo de documento de texto
  void configurar(string _value) override {
    m_value = _value;
  }

  // M�todo para mostrar detalles del prototipo de documento de texto
  void mostrar() override {
    cout << "Texto: " << m_value << endl;
  }

private:
  string m_value; // Variable para almacenar el valor del prototipo de documento de texto
};

// Clase concreta DocumentoImagen que implementa la interfaz del prototipo de documento
class 
  DocumentoImagen : 
  public DocumentoPrototype {
public:
  // M�todo para clonar el prototipo de documento de imagen
  DocumentoPrototype* clone() override {
    DocumentoImagen* copy = new DocumentoImagen();
    copy->configurar(m_value);
    return copy;
  }

  // M�todo para configurar el prototipo de documento de imagen
  void configurar(string _value) override {
    m_value = _value;
  }

  // M�todo para mostrar detalles del prototipo de documento de imagen
  void mostrar() override {
    cout << "Imagen: " << m_value << endl;
  }

private:
  string m_value; // Variable para almacenar el valor del prototipo de documento de imagen
};
