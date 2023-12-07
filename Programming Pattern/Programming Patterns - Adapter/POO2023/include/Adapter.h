#include "Prerequisites.h"

class Circulo
{
public:
	virtual void dibujarCirculo() {
		cout << "Circulo dibujado" << endl;
	}
};

class Cuadrado
{
public:
	virtual void dibujarCuadrado() {
		cout << "Cuadrado dibujado" << endl;
	}
};

class Dibujable
{
public:
	virtual void dibujar() {
		cout << " Metodo Dibujable llamado " << endl;
	}
};


class CirculoAdapter : public Dibujable
{
public:
	CirculoAdapter(Circulo* _circulo) :m_circulo(_circulo){}

	void dibujar() override {
		cout << "Adaptador llamado al metodo Dibujar circulo" << endl;
		m_circulo->dibujarCirculo();
	}

public:
	Circulo* m_circulo;
};

class CuadradoAdapter : public Dibujable
{
public:
	CuadradoAdapter(Cuadrado* _cuadrado) :m_cuadrado(_cuadrado) {}

	void dibujar() override {
		cout << "Adaptador llamado al metodo Dibujar cuadrado" << endl;
		m_cuadrado->dibujarCuadrado();
	}

public:
	Cuadrado* m_cuadrado;
};
