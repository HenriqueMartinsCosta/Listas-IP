#include <stdio.h>

  int main(){
    int n, vet[32], resto, i, q;
      while(scanf("%d", &n)!=EOF){
        q=0;
        if(n==1 || n==0){
          vet[0]=n;
        }
        else{
          vet[q]=n%2;
          while(n>1){
            q++;
            n=n/2;
            vet[q]=n%2;
          }
        }
        for(i=q; i>=0; i--){
          printf("%d", vet[i]);
          if(i==0){
            printf("\n");
          }
        }
      }
  }
