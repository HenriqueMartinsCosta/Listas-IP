#include <stdio.h>

  int main(){
    int n, i;
    scanf("%d", &n);
    int vet[n];
      for(i=1; i<=n; i++){
        scanf("%d", &vet[i]);
      }
      for(i=1; i<=n; i++){
        if(i==n){
         printf("%d", vet[i]);
        }
        else{
         printf("%d ", vet[i]);
        }
      }
  }
