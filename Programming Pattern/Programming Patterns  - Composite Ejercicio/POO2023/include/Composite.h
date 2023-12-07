#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase Archivo que representa un archivo en el sistema
class 
  Archivo {
public:
  // Muestra información sobre el archivo
  void mostrarInfo() {
    cout << " Soy un archivo " << endl;
  }
};

// Clase Carpeta que representa una carpeta en el sistema
class 
  Carpeta {
public:
  // Muestra información sobre la carpeta
  void mostrarInfo() {
    cout << " Soy una carpeta " << endl;
  }
};

// Clase abstracta Sistema que define la interfaz para archivos y carpetas
class 
  Sistema {
public:
  // Método virtual puro para mostrar información
  virtual void mostrarInfo() = 0;
};

// Clase SistemaArchivo que actúa como un archivo en el sistema
class 
  SistemaArchivo : 
  public Archivo, 
  public Sistema {
public:
  // Muestra información sobre el SistemaArchivo y sus elementos internos
  void mostrarInfo() override {
    cout << "Operación en Archivo" << endl;

    // Recorre y muestra información de los archivos contenidos en el SistemaArchivo
    for (auto archivo : m_archivo) {
      archivo->mostrarInfo();
    }
  }

  // Agrega un archivo al SistemaArchivo
  void agregarArchivo(Sistema* _archivo) {
    m_archivo.push_back(_archivo);
  }

private:
  vector<Sistema*> m_archivo; // Almacena archivos dentro del SistemaArchivo
};

// Clase SistemaCarpeta que actúa como una carpeta en el sistema
class 
  SistemaCarpeta : 
  public Carpeta, 
  public Sistema {
public:
  // Muestra información sobre el SistemaCarpeta y sus elementos internos
  void mostrarInfo() override {
    cout << "Operación en Carpeta" << endl;

    // Recorre y muestra información de las carpetas contenidas en el SistemaCarpeta
    for (auto carpeta : m_carpeta) {
      carpeta->mostrarInfo();
    }
  }

  // Agrega una carpeta al SistemaCarpeta
  void agregarCarpeta(Sistema* _carpeta) {
    m_carpeta.push_back(_carpeta);
  }

private:
  vector<Sistema*> m_carpeta; // Almacena carpetas dentro del SistemaCarpeta
};
