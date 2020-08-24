#include <stdio.h>

  int main(){
    int n, n1, n2, n3, n4;
    scanf("%d", &n);
      if(n<9999){
        n1=n/1000;
        n2=(n/100)%10;
        n3=((n/10)%100)%10;
        n4=((n%1000)%100)%10;
          if(n>=1 && n<10){
            printf("(primeira ordem) %d =", n);
              if(n>1){
                printf(" %d unidades", n);
              }
              else{
                printf(" %d unidade", n);
              }
          }
          if(n>=10 && n<100){
            printf("(segunda ordem) %d =", n);
              if(n3>1){
                printf(" %d dezenas", n3);
              }
              else{
                printf(" %d dezena", n3);
              }
              if(n4>1){
                printf(" + %d unidades", n4);
              }
              if(n4==1){
                printf(" + %d unidade", n4);
              }
              if(n4==0){
                printf("");
              }
              printf(" = %d", n3*10);
              if(n4==0){
                printf("");
              }
              else{
                printf(" + %d", n4);
              }
          }
          if(n>=100 && n<1000){
            printf("(terceira ordem) %d =", n);
              if(n2>1){
                printf(" %d centenas", n2);
              }
              else{
                printf(" %d centena", n2);
              }
              if(n3>1){
                printf(" + %d dezenas", n3);
              }
              if(n3==1){
                printf(" + %d dezena", n3);
              }
              if(n3==0){
                printf("");
              }
              if(n4>1){
                printf(" + %d unidades", n4);
              }
              if(n4==1){
                printf(" + %d unidade", n4);
              }
              if(n4==0){
                printf("");
              }
              printf(" = %d", n2*100);
              if(n3==0){
                printf("");
              }
              else{
                printf(" + %d", n3*10);
              }
              if(n4==0){
                printf("");
              }
              else{
                printf(" + %d", n4);
              }
          }
          if(n>=1000){
            printf("(quarta ordem) %d =", n);
              if(n1>1){
                printf(" %d unidades de milhar", n1);
              }
              else{
                printf(" %d unidade de milhar", n1);
              }
              if(n2>1){
                printf(" + %d centenas", n2);
              }
              if(n2==1){
                printf(" + %d centena", n2);
              }
              if(n2==0){
                printf("");
              }
              if(n3>1){
                printf(" + %d dezenas", n3);
              }
              if(n3==1){
                printf(" + %d dezena", n3);
              }
              if(n3==0){
                printf("");
              }
              if(n4>1){
                printf(" + %d unidades", n4);
              }
              if(n4==1){
                printf(" + %d unidade", n4);
              }
              if(n4==0){
                printf("");
              }
              printf(" = %d", n1*1000);
              if(n2==0){
                printf("");
              }
              else{
                printf(" + %d", n2*100);
              }
              if(n3==0){
                printf("");
              }
              else{
                printf(" + %d", n3*10);
              }
              if(n4==0){
                printf("");
              }
              else{
                printf(" + %d", n4);
              }
          }
      }
      else{
        printf("Numero invalido!\n");
      }
      if(n==0){
        printf("Numero invalido!\n");
      }
  }
