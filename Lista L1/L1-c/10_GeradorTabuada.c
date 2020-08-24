#include <stdio.h>

  int main(){
    float n, i, is, im, id, k, ks, km, kd, s, soma, subtracao, multiplicacao, divisao;
    scanf("%f %f %f %f", &n, &i, &k, &s);
      is=i;
      im=i;
      id=i;
      ks=k;
      km=k;
      kd=k;
      printf("Tabuada de soma:\n");
        soma=n+i;
        printf("%.2f + %.2f = %.2f\n", n, i, soma);
          for(k--; k>0; k--){
            i += s;
            soma=n+i;
            printf("%.2f + %.2f = %.2f\n", n, i, soma);
          }
      printf("Tabuada de subtracao:\n");
        subtracao=n-is;
        printf("%.2f - %.2f = %.2f\n", n, is, subtracao);
          for(ks--; ks>0; ks--){
            is += s;
            subtracao=n-is;
            printf("%.2f - %.2f = %.2f\n", n, is, subtracao);
          }
      printf("Tabuada de multiplicacao:\n");
       multiplicacao=n*im;
       printf("%.2f x %.2f = %.2f\n", n, im, multiplicacao);
          for(km--; km>0; km--){
            im += s;
            multiplicacao=n*im;
            printf("%.2f x %.2f = %.2f\n", n, im, multiplicacao);
          }
      printf("Tabuada de divisao:\n");
        divisao=n/id;
        printf("%.2f / %.2f = %.2f\n", n, id, divisao);
          for(kd--; kd>0; kd--){
            id += s;
            divisao=n/id;
            printf("%.2f / %.2f = %.2f\n", n, id, divisao);
          }
  }
