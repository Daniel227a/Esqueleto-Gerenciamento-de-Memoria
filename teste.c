#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char *argv[ ] )
{
  int Resultado, valorA=0, valorB=0;
  printf("\nMultiplicando valores passados na linha de comando\n");
  
  //atoi converte de alfanumérico para inteiro
  valorA = atoi(argv[1]);
  valorB = atoi(argv[2]);
  
  Resultado = valorA * valorB;
  printf("\n%d X %d = %d\n",valorA,valorB,Resultado);
  
  return 0;
}