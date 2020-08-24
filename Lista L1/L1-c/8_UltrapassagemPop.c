#include <stdio.h>

  int main(){
    int a, b, anos;
    scanf("%d %d", &a, &b);
      for(anos=0; a<b; anos++){
        a += a*0.03;
        b += b*0.015;
      }
      printf("ANOS = %d\n", anos);
  }
