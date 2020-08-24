#include <stdio.h>

  int main(){
    int n, d, soma=0;
    scanf("%d", &n);
    printf("%d =", n);
      for(d=1; d<n; d++){
        if(n%d==0){
          soma+=d;
            if(d==1){
              printf(" %d", d);
            }
            else{
              printf(" + %d", d);
            }
        }
      }
      printf(" = %d", soma);
      if(soma==n){
        printf(" (NUMERO PERFEITO)\n");
      }
      else{
        printf(" (NUMERO NAO E PERFEITO)\n");
      }
  }
