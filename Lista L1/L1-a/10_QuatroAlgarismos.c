#include <stdio.h>

  int main(){
    int n1, n2, n3, n4, n, n_final;
    scanf("%d", &n);
      n1=n/100;
      n2=(n/10)%10;
      n3=(n%100)%10;
      n4=(n1+(n2*3)+(n3*5))%7;
      n_final=(n1*1000)+(n2*100)+(n3*10)+n4;
    printf("O NOVO NUMERO E = %d\n", n_final);
  }
