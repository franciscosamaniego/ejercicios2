//Escribir un programa que acepte cuatro argumentos: las coordenadas de dos vectores en el plano e imprima el valor del producto entre dichos vectores.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int v1 = atoi(argv[1]);
  int v2 = atoi(argv[2]);
  int u1 = atoi(argv[3]);
  int u2 = atoi(argv[4]);
  printf("%d\n", v1 * u1 + v2 * u2);
  return 0;
}
