#include <stdio.h>

  int main(){
    int n, i, num, maior, menor;
    scanf("%d", &n);
    int vet[n];
      for(i=0; i<n; i++){
        scanf("%d", &num);
        vet[i]=num;
      }
      maior=vet[0];
      menor=vet[0];
      for(i=0; i<n; i++){
        if(vet[i]>maior){
          maior=vet[i];
        }
        if(vet[i]<menor){
          menor=vet[i];
        }
      }
      for(i=0; i<n; i++){
        if(i==(n-1)){
          printf("%d\n", vet[i]);
        }
        else{
          printf("%d ", vet[i]);
        }
      }
      for(i=(n-1); i>=0; i--){
        if(i==0){
          printf("%d\n", vet[i]);
        }
        else{
          printf("%d ", vet[i]);
        }
      }
      printf("%d\n", maior);
      printf("%d\n", menor);
  }
