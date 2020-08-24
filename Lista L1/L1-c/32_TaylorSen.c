#include <stdio.h>
#include <math.h>

  int main(){
    double i, n, multiplicador, fatorial, x, sen=0;
    scanf("%lf %lf", &x, &i);
      for(n=0; n<=i; n++){
        if(n==0){
          fatorial=1;
        }
        else{
          fatorial=(2*n)+1;
            for(multiplicador=((2*n)+1)-1; multiplicador>1; multiplicador--){
              fatorial=fatorial*multiplicador;
            }
        }
        sen+=(pow((-1), n)*pow(x, (2*n+1)))/fatorial;
      }
      printf("seno(%.2lf) = %.6lf\n", x, sen);
  }
