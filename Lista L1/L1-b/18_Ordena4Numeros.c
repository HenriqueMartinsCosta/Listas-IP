#include <stdio.h>

  int main(){
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
      if(a>=b){
        if(b>=c){
          if(c>=d){ //a>b>c>d
            printf("%.2f, %.2f, %.2f, %.2f\n", d, c, b, a);
          }
          else{
            if(d>=a){ //d>a>b>c
              printf("%.2f, %.2f, %.2f, %.2f\n", c, b, a, d);
            }
            else{
              if(d>=b){ //a>d>b>c
                printf("%.2f, %.2f, %.2f, %.2f\n", c, b, d, a);
              }
              else{ //a>b>d>c
                printf("%.2f, %.2f, %.2f, %.2f\n", c, d, b, a);
              }
            }
          }
        }
        else{
          if(c>=a){
            if(c>=d){
              if(d>=a){ //c>d>a>b
                printf("%.2f, %.2f, %.2f, %.2f\n", b, a, d, c);
              }
              else{
                if(d>=b){ //c>a>d>b
                  printf("%.2f, %.2f, %.2f, %.2f\n", b, d, a, c);
                }
                else{ //c>a>b>d
                  printf("%.2f, %.2f, %.2f, %.2f\n", d, b, a, c);
                }
              }
            }
            else{ //d>c>a>b
              printf("%.2f, %.2f, %.2f, %.2f\n", b, a, c, d);
            }
          }
          else{
            if(d>=a){ //d>a>c>b
              printf("%.2f, %.2f, %.2f, %.2f\n", b, c, a, d);
            }
            else{
              if(d>=c){ //a>d>c>b
                printf("%.2f, %.2f, %.2f, %.2f\n", b, c, d, a);
              }
              else{
                if(d>=b){ //a>c>d>b
                  printf("%.2f, %.2f, %.2f, %.2f\n", b, d, c, a);
                }
                else{ //a>c>b>d
                  printf("%.2f, %.2f, %.2f, %.2f\n", d, b, c, a);
                }
              }
            }
          }
        }
      }
      else{
        if(b>=c){
          if(c>=a){
            if(d>=b){ //d>b>c>a
              printf("%.2f, %.2f, %.2f, %.2f\n", a, c, b, d);
            }
            else{
              if(d>=c){ //b>d>c>a
                printf("%.2f, %.2f, %.2f, %.2f\n", a, c, d, b);
              }
              else{
                if(d>=a){ //b>c>d>a
                  printf("%.2f, %.2f, %.2f, %.2f\n", a, d, c, b);
                }
                else{ //b>c>a>d
                  printf("%.2f, %.2f, %.2f, %.2f\n", a, d, c, b);
                }
              }
            }
          }
          else{
            if(d>=b){ //d>b>a>c
              printf("%.2f, %.2f, %.2f, %.2f\n", c, a, b, d);
            }
            else{
              if(d>=a){ //b>d>a>c
                printf("%.2f, %.2f, %.2f, %.2f\n", c, a, d, b);
              }
              else{
                if(d>=c){ //b>a>d>c
                  printf("%.2f, %.2f, %.2f, %.2f\n", c, d, a, b);
                }
                else{ //b>a>c>d
                  printf("%.2f, %.2f, %.2f, %.2f\n", d, c, a, b);
                }
              }
            }
          }
        }
        else{
          if(d>=c){ //d>c>b>a
            printf("%.2f, %.2f, %.2f, %.2f\n", a, b, c, d);
          }
          else{
            if(d>=b){ //c>d>b>a
              printf("%.2f, %.2f, %.2f, %.2f\n", a, b, d, c);
            }
            else{
              if(d>=a){ //c>b>d>a
                printf("%.2f, %.2f, %.2f, %.2f\n", a, d, b, c);
              }
              else{ //c>b>a>d
                printf("%.2f, %.2f, %.2f, %.2f\n", d, a, b, c);
              }
            }
          }
        }
      }
  }
