#include <stdio.h>

  int main(){
    int n, cont, maior, i;
    scanf("%d", &n);
      while(n>0){
        int vet[n];
        maior=0;
        for(cont=0; cont<n; cont++){
          scanf("%d", &vet[cont]);
          if(vet[cont]>maior){
            maior=vet[cont];
            i=cont;
          }
        }
        printf("%d %d\n", i, maior);
        scanf("%d", &n);
      }
  }
