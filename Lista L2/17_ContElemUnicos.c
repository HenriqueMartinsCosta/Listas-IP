#include <stdio.h>

  int main(){
    int n, i, i1, q, unicos=0;
    scanf("%d", &n);
    int vet[n];
      for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
      }
      for(i=0; i<n; i++){
        q=0;
        for(i1=0; i1<n; i1++){
          if(vet[i]!=vet[i1]){
            q++;
          }
        }
        if(q==(n-1)){
          unicos++;
        }
      }
      printf("%d\n", unicos);
  }
