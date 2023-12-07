#include "Prerequisites.h" // Incluye el archivo de encabezado Prerequisites.h

// Clase Archivo que representa un archivo en el sistema
class 
  Archivo {
public:
  // Muestra informaci�n sobre el archivo
  void mostrarInfo() {
    cout << " Soy un archivo " << endl;
  }
};

// Clase Carpeta que representa una carpeta en el sistema
class 
  Carpeta {
public:
  // Muestra informaci�n sobre la carpeta
  void mostrarInfo() {
    cout << " Soy una carpeta " << endl;
  }
};

// Clase abstracta Sistema que define la interfaz para archivos y carpetas
class 
  Sistema {
public:
  // M�todo virtual puro para mostrar informaci�n
  virtual void mostrarInfo() = 0;
};

// Clase SistemaArchivo que act�a como un archivo en el sistema
class 
  SistemaArchivo : 
  public Archivo, 
  public Sistema {
public:
  // Muestra informaci�n sobre el SistemaArchivo y sus elementos internos
  void mostrarInfo() override {
    cout << "Operaci�n en Archivo" << endl;

    // Recorre y muestra informaci�n de los archivos contenidos en el SistemaArchivo
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

// Clase SistemaCarpeta que act�a como una carpeta en el sistema
class 
  SistemaCarpeta : 
  public Carpeta, 
  public Sistema {
public:
  // Muestra informaci�n sobre el SistemaCarpeta y sus elementos internos
  void mostrarInfo() override {
    cout << "Operaci�n en Carpeta" << endl;

    // Recorre y muestra informaci�n de las carpetas contenidas en el SistemaCarpeta
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
