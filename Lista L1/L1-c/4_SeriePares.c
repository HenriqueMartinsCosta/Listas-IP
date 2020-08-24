#include <stdio.h>

  int main(){
    int numero, quantidade;
    scanf("%d %d", &numero, &quantidade);
      if(numero%2==0){
        printf("%d", numero);
        while(quantidade>1){
          quantidade -= 1;
          numero += 2;
          printf(" %d", numero);
          if(quantidade==1){
            printf("\n");
          }
        }
      }
      else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
      }
  }
