#include <stdio.h>

  int main(){
    float a, b, c, i;
    scanf("%f %f %f %f", &i, &a, &b, &c);
      if(i==1){ //Ordem Crescente
        if(a>=b){
          if(b>=c){ //a>b>c
            printf("%.2f %.2f %.2f\n", c, b, a);
          }
          else{
            if(a>=c){ //a>c>b
              printf("%.2f %.2f %.2f\n", b, c, a);
            }
            else{ //c>a>b
              printf("%.2f %.2f %.2f\n", b, a, c);
            }
          }
        }
        else{
          if(b>=c){
            if(a>=c){ //b>a>c
              printf("%.2f %.2f %.2f\n", c, a, b);
            }
            else{ //b>c>a
              printf("%.2f %.2f %.2f\n", a, c, b);
            }
          }
          else{ //c>b>a
            printf("%.2f %.2f %.2f\n", a, b, c);
          }
        }
      }
      if(i==2){ //Ordem Decrescente
        if(a>=b){
          if(b>=c){ //a>b>c
            printf("%.2f %.2f %.2f\n", a, b, c);
          }
          else{
            if(a>=c){ //a>c>b
              printf("%.2f %.2f %.2f\n", a, c, b);
            }
            else{ //c>a>b
              printf("%.2f %.2f %.2f\n", c, a, b);
            }
          }
        }
        else{
          if(b>=c){
            if(a>=c){ //b>a>c
              printf("%.2f %.2f %.2f\n", b, a, c);
            }
            else{ //b>c>a
              printf("%.2f %.2f %.2f\n", b, c, a);
            }
          }
          else{ //c>b>a
            printf("%.2f %.2f %.2f\n", c, b, a);
          }
        }
      }
      if(i==3){ //Maior no meio e menor por ultimo
        if(a>=b){
          if(b>=c){ //a>b>c
            printf("%.2f %.2f %.2f\n", b, a, c);
          }
          else{
            if(a>=c){ //a>c>b
              printf("%.2f %.2f %.2f\n", c, a, b);
            }
            else{ //c>a>b
              printf("%.2f %.2f %.2f\n", a, c, b);
            }
          }
        }
        else{
          if(b>=c){
            if(a>=c){ //b>a>c
              printf("%.2f %.2f %.2f\n", a, b, c);
            }
            else{ //b>c>a
              printf("%.2f %.2f %.2f\n", c, b, a);
            }
          }
          else{ //c>b>a
            printf("%.2f %.2f %.2f\n", b, c, a);
          }
        }
      }
  }
