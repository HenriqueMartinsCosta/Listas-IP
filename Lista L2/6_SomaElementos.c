#include <stdio.h>

  int main(){
    int n, i, soma=0;
    scanf("%d", &n);
    int vet[n];
      for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
        soma+=vet[i];
      }
      printf("%d\n", soma);
  }
