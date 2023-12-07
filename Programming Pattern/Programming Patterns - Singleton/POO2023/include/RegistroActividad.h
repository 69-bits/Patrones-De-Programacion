#include "Commons.h" // Incluye el archivo de encabezado Commons.h

class RegistroActividad {
public:
  // Constructor privado para evitar instanciaci�n directa
  RegistroActividad() {};

  // M�todo est�tico para obtener la instancia �nica del RegistroActividad
  static RegistroActividad* getInstance() {
    if (m_instance != nullptr) {
      return m_instance;
    }
    else {
      m_instance = new RegistroActividad;
    }
    return m_instance;
  }

  // Destructor por defecto
  ~RegistroActividad() = default;

  // M�todo para registrar una actividad en el registro
  void setActivity(const string& activity) {
    m_activities.push_back(activity);
  }

  // M�todo para obtener y mostrar las actividades registradas
  void getActivity() {
    for (int i = 0; i < m_activities.size(); i++) {
      cout << "Actividad: " << m_activities[i] << endl;
    }
  }

private:
  static RegistroActividad* m_instance; // Instancia �nica del RegistroActividad
  vector<string> m_activities; // Vector para almacenar las actividades registradas
};
