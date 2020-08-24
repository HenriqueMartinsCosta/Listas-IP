#include <stdio.h>

  int main(){
    int n1, n2, n3, n4, n_soma;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
      if(n1>n2 && n1>n3 && n1>n4){
        n_soma=n2+n3+n4;
      }
      if(n2>n1 && n2>n3 && n2>n4){
        n_soma=n1+n3+n4;
      }
      if(n3>n1 && n3>n2 && n3>n4){
        n_soma=n1+n2+n4;
      }
      if(n4>n1 && n4>n2 && n4>n3){
        n_soma=n1+n2+n3;
      }
    printf("%d\n", n_soma);
  }
