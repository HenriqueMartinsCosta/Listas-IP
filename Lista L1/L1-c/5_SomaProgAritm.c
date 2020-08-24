#include <stdio.h>

  int main(){
    int n, r, elementos, valor=0;
    scanf("%d %d %d", &n, &r, &elementos);
      while(elementos>0){
        elementos -= 1;
        valor += n;
        n += r;
      }
    printf("%d\n", valor);
  }
