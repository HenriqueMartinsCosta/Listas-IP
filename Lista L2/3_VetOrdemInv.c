#include <stdio.h>

  int main(){
    int i, i1, n;
    scanf("%d", &i);
    int vet[i];
      for(i1=1; i1<=i; i1++){
        scanf("%d", &n);
        vet[i1]=n;
      }
      for(i1=i; i1>0; i1--){
        printf("%d", vet[i1]);
        if(i1>1){
          printf(" ");
        }
      }
  }
