#include <stdio.h>

  int main(){
    int h, m, s, ts;
    scanf("%d %d %d", &h, &m, &s);
      ts=(h*3600)+(m*60)+s;
    printf("O TEMPO EM SEGUNDOS E = %d\n", ts);
  }
