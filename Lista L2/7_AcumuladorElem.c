#include <stdio.h>

  int main(){
    int n, i, i1, maior, q;
    scanf("%d", &n);
      while(n>0){
        int vet[n];
        maior=-1;
        for(i=0; i<n; i++){
          scanf("%d", &vet[i]);
          if(vet[i]>maior){
            maior=vet[i];
          }
        }
        for(i=0; i<=maior; i++){
          q=0;
          for(i1=0; i1<n; i1++){
            if(vet[i1]<=i){
              q++;
            }
          }
          printf("(%d) %d\n", i, q);
        }
        scanf("%d", &n);
      }
  }
