#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  double theta = atof(argv[1]);
  printf("%f\n", cos(theta)*cos(theta) + sin(theta) *sin(theta));
  return 0;
}
