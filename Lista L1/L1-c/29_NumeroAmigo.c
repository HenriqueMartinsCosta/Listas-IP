#include <stdio.h>

  int main(){
    int i, n, n1=1, n2, divisor1, divisor2, soma1=0, soma2=0, anterior=0;
    scanf("%d", &n);
      for(i=1; i<=n;){
        for(divisor1=1; divisor1<n1; divisor1++){
          if(n1%divisor1==0){
            soma1+=divisor1;
          }
        }
        n2=soma1;
        for(divisor2=1; divisor2<n2; divisor2++){
          if(n2%divisor2==0){
            soma2+=divisor2;
          }
        }
        if(n1==soma2 && n2==soma1 && n1!=n2 && n1!=anterior){
          printf("(%d,%d)\n", n1, n2);
          i++;
          anterior=n2;
        }
        n1++;
        soma1=0;
        soma2=0;
      }
    }
