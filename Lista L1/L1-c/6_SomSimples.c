#include <stdio.h>

  int main(){
    double n, divisor=0, soma;
    scanf("%lf", &n);
      while(divisor<n){
        divisor += 1;
        soma += (1/divisor);
      }
    printf("%.6lf\n", soma);
  }
