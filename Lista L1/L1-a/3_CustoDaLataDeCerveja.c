#include <stdio.h>

  int main(){
    double custo_e, at, ac, al, pi, r, a;
      pi=3.14159;
    scanf("%lf %lf", &r, &a);
      ac=pi*r*r;
      al=2*pi*r*a;
      at=2*ac+al;
      custo_e=at*100;
    printf("O VALOR DO CUSTO E = %.2lf\n", custo_e);
  }
