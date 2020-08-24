#include <stdio.h>

  int main(){
    int n, anterior, atual, i, k=1, kmax=0;
    scanf("%d", &n);
    scanf("%d", &anterior);
      for(i=2; i<=n; i++){
        scanf("%d", &atual);
        if(atual == anterior){
          k++;
        }
        else{
          anterior=atual;
          k=1;
        }
        if(k>kmax && k!=1){
          kmax=k;
        }
      }
      printf("O comprimento do segmento de numeros iguais e: %d\n", kmax);
  }
