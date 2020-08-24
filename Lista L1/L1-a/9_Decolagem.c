#include <stdio.h>

  int main(){
    double v, a, t, m, s, w;
    scanf("%lf %lf %lf", &m, &a, &t);
      v=(a*t);
      s=(a*t*t)/2;
      w=(m*1000*v*v)/2;
      printf("VELOCIDADE = %.2lf\n", v*3.6);
      printf("ESPACO PERCORRIDO = %.2lf\n", s);
      printf("TRABALHO REALIZADO = %.2lf\n", w);
  }
