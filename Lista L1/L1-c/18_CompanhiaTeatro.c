#include <stdio.h>
#include <math.h>

  int main(){
    double v, vi, vf, diferenca_i, ingressos, lucro, lucromax=-1, nfinal, vfinal;
    scanf("%lf %lf %lf", &v, &vi, &vf);
      if(vi>=vf){
        printf("INTERVALO INVALIDO.\n");
      }
      else{
        for(vi; vi<=vf; vi++){
          ingressos=120;
          diferenca_i=vi-v;
            if(diferenca_i<0){
              ingressos+=fabs(diferenca_i)*50;
            }
            else{
              ingressos-=diferenca_i*60;
            }
              lucro=(ingressos*vi)-(200+(ingressos*0.05));
                if(lucro>lucromax){
                  lucromax=lucro;
                  nfinal=ingressos;
                  vfinal=vi;
                }
                  printf("V: %.2lf, N: %.0lf, L: %.2lf\n", vi, ingressos, lucro);
        }
          if(lucromax<=0){
            printf("Melhor valor final: 0.00\n");
            printf("Lucro: 0.00\n");
            printf("Numero de ingressos: 0\n");
          }
          else{
            printf("Melhor valor final: %.2lf\n", vfinal);
            printf("Lucro: %.2lf\n", lucromax);
            printf("Numero de ingressos: %.0lf\n", nfinal);
          }
      }
  }
