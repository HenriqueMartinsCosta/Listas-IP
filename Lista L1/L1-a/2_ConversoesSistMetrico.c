#include <stdio.h>

  int main(){
    float f, c, p, mm;
    scanf("%f %f", &f, &p);
      c=(5*(f-32))/9;
      mm=p*25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", c);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", mm);
  }
