#include <stdio.h>

  int main(){
    int n, x, y, z, w;
    scanf("%d", &n);
      x=n/100;
      y=(n%100)/50;
      z=((n%100)%50)/10;
      w=((n%100)%50)%10;
    printf("NOTAS DE 100 = %d\n", x);
    printf("NOTAS DE 50 = %d\n", y);
    printf("NOTAS DE 10 = %d\n", z);
    printf("MOEDAS DE 1 = %d\n", w);
  }
