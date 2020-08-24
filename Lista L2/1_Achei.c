#include <stdio.h>

  int main(){
    int i, i1, i2, tamanho, n, achou=0;
    scanf("%d", &tamanho);
    int vet[tamanho];
      for(i1=1; i1<=tamanho; i1++){
        scanf("%d", &n);
        vet[i1]=n;
      }
      scanf("%d", &i);
        for(i1=1; i1<=i; i1++){
          scanf("%d", &n);
            for(i2=1; i2<=tamanho; i2++){
              if(n==vet[i2]){
                achou++;
              }
            }
            if(achou>0){
              printf("ACHEI\n");
            }
            else{
              printf("NAO ACHEI\n");
            }
            achou=0;
        }
  }
