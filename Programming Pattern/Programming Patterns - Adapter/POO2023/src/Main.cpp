#include "Adapter.h"
#include "Prerequisites.h"

int 
main(){

  Circulo* circulo = new Circulo();
  Cuadrado* cuadrado = new Cuadrado();

  Dibujable* adaptadorCirculo = new CirculoAdapter(circulo);
  Dibujable* adaptadorCuadrado = new CuadradoAdapter(cuadrado);

  adaptadorCirculo->dibujar();
  adaptadorCuadrado->dibujar();

  delete circulo;
  delete cuadrado;
  delete adaptadorCirculo;
  delete adaptadorCuadrado;
}