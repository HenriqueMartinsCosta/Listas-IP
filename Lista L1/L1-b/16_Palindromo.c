#include <stdio.h>

  int main(){
    int n, n1, n2, n3, n4, n5, palindromo;
    scanf("%d", &n);
      if(n<99999){
        n1=n/10000;
        n2=(n/1000)%10;
        n3=((n/100)%100)%10;
        n4=(((n/10)%1000)%100)%10;
        n5=(((n%10000)%1000)%100)%10;
          if(n<10 && n>=0){
            printf("PALINDROMO\n");
          }
          if(n>=10 && n<100){
            palindromo=(n5*10)+n4;
              if(palindromo==n){
                printf("PALINDROMO\n");
              }
              else{
                printf("NAO PALINDROMO\n");
              }
          }
          if(n>=100 && n<1000){
            palindromo=(n5*100)+(n4*10)+n3;
              if(palindromo==n){
                printf("PALINDROMO\n");
              }
              else{
                printf("NAO PALINDROMO\n");
              }
          }
          if(n>=1000 && n<10000){
            palindromo=(n5*1000)+(n4*100)+(n3*10)+n2;
              if(palindromo==n){
                printf("PALINDROMO\n");
              }
              else{
                printf("NAO PALINDROMO\n");
              }
          }
          if(n>=10000){
            palindromo=(n5*10000)+(n4*1000)+(n3*100)+(n2*10)+n1;
              if(palindromo==n){
                printf("PALINDROMO\n");
              }
              else{
                printf("NAO PALINDROMO\n");
              }
          }
      }
      else{
        printf("NUMERO INVALIDO\n");
      }
  }
