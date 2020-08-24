#include <stdio.h>

  int main(){
    int n, num, indice, i, ultima, q=0, maior=-1;
    scanf("%d", &n);
    int vet[n];
      for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
          if(vet[i]>maior){
            maior=vet[i];
            indice=i;
          }
      }
      ultima=vet[(n-1)];
      for(i=0; i<n; i++){
        if(vet[i]==ultima){
          q++;
        }
      }
      printf("Nota %d, %d vezes\n", ultima, q);
      printf("Nota %d, indice %d\n", maior, indice);
  }
