#include <stdio.h>
#include <math.h>

  int main(){
    double i, n, multiplicador, fatorial, x, e=0;
    scanf("%lf %lf", &x, &i);
      for(n=0; n<=i; n++){
        if(n==0){
          fatorial=1;
        }
        else{
          fatorial=n;
            for(multiplicador=n-1; multiplicador>1; multiplicador--){
              fatorial=fatorial*multiplicador;
            }
        }
        e+=(pow(x, n))/fatorial;
      }
      printf("e^%.2lf = %.6lf\n", x, e);
  }
