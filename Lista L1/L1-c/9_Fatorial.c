#include <stdio.h>

  int main(){
    int n, multiplicador, fatorial;
    scanf("%d", &n);
    if(n==0){
      printf("0! = 1\n");
    }
    else{
      fatorial=n;
        for(multiplicador=n-1; multiplicador>1; multiplicador--){
          fatorial=fatorial*multiplicador;
        }
        printf("%d! = %d\n", n, fatorial);
    }
  }
