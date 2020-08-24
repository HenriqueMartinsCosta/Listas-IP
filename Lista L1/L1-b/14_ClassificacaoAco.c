#include <stdio.h>

  int main(){
    int cc, dr, rt, x;      
    scanf("%d %d %d", &cc, &dr, &rt);
      if(cc<7 && dr>50 && rt>80000){
        x=10;
      }
      else{
        if(cc<7 && dr>50){
          x=9;
        }
        else{
          if(cc<7){
            x=8;
          }
          else{
            x=7;
          }
        }
      }
    printf("ACO DE GRAU = %d\n", x);

  }
