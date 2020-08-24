#include <stdio.h>

  int main(){
    int numero, numero_dividido, fator=2;
repetir:
    scanf("%d", &numero);
    if(numero<1){
      printf("Fatoracao nao e possivel para o numero %d!\n", numero);
      goto repetir;
    }
    else{
      if(numero==1){
        printf("Fatoracao nao e possivel para o numero %d!\n", numero);
        goto repetir;
      }
      else{
        printf("%d =", numero);
        numero_dividido=numero;
          while(numero_dividido>1){
            if(numero_dividido%fator==0){
              numero_dividido=numero_dividido/fator;
                if(numero_dividido>1){
                  printf(" %d x", fator);
                }
                else{
                  printf(" %d\n", fator);
                }
            }
            else{
              fator += 1;
            }
          }
      }
    }
  }
