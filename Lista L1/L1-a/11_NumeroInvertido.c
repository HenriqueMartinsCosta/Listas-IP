#include <stdio.h>

  int main(){
    int n1, n2, n3, n, n_final;
    scanf("%d", &n);
      n1=n/100;
      n2=(n/10)%10;
      n3=(n%100)%10;
      n_final=(n3*100)+(n2*10)+n1;
    printf("%d\n", n_final);
  }
