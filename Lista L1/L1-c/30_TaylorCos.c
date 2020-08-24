#include <stdio.h>
#include <math.h>

  int main(){
    double i, n, multiplicador, fatorial, x, cos=0;
    scanf("%lf %lf", &x, &i);
      for(n=0; n<=i; n++){
        if(n==0){
          fatorial=1;
        }
        else{
          fatorial=2*n;
            for(multiplicador=(2*n)-1; multiplicador>1; multiplicador--){
              fatorial=fatorial*multiplicador;
            }
        }
        cos+=(pow((-1), n)*pow(x, (2*n)))/fatorial;
      }
      printf("cos(%.2lf) = %.6lf\n", x, cos);
  }
