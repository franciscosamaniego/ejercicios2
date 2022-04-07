//Escribir un programa que acepte tres argumentos x, y y z enteros e imprima "verdadero" si los números están en orden ascendente o descendente. Es decir si x > y > z o x < y < z. Si no lo están, imprimir "falso".
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y= atoi(argv[2]);
  int z = atoi(argv[3]);
  printf("%s\n", x>y&&y>z || x<y&&y<z  ?"si" : "no");
  return 0;
}
