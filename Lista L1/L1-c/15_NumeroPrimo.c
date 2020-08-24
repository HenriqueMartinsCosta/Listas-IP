#include <stdio.h>

  int main(){
    int n;
    scanf("%d", &n);
      if(n<0){
        printf("Numero invalido!\n");
      }
      else{
        if(n==2 || n==3){
          printf("PRIMO\n");
        }
        else{
          if(n%2==0 || n%3==0){
            printf("NAO PRIMO\n");
          }
          else{
            printf("PRIMO\n");
          }
        }
     }
  }
