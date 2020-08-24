#include <stdio.h>
#include <math.h>

  int main(){
    double a, b, c, i, delta, raiz, raiz1=0, raiz2=0;
    scanf ("%lf %lf %lf", &a, &b, &c);
      delta=(b*b)-(4*a*c);
      if(delta<0){
        i=sqrt(fabs(delta))/(2*a);
        raiz=(-b)/(2*a);
        if(raiz==-0){
          raiz=0;
        }
          if(raiz!=0){
            if(i!=1){
              printf("x1 = %.2lf+%.2lfi\nx2 = %.2lf-%.2lfi\n", raiz, i, raiz, i);
            }
            else{
              printf("x1 = %.2lf+i\nx2 = %.2lf-i\n", raiz, i, raiz, i);
            }
          }
          else{
            if(i!=1){
              printf("x1 = %.2lfi\nx2 = -%.2lfi\n", raiz, i, raiz, i);
            }
            else{
              printf("x1 = i\nx2 = -i\n", raiz, i, raiz, i);
            }
          }
      }
      else{
        if(delta==0){
          raiz1=(-b)/(2*a);
        }
        else{
          raiz1=(-b+sqrt(delta))/(2*a);
          raiz2=(-b-sqrt(delta))/(2*a);
        }
        if(raiz1==-0){
          raiz1=0;
        }
        if(raiz2==-0){
          raiz2=0;
        }
        printf("x1 = %.2lf\nx2 = %.2lf", raiz1, raiz2);
      }
  }
