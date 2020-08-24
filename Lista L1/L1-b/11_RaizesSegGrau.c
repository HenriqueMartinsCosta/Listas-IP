#include <stdio.h>
#include <math.h>

  int main(){
    double a, b, c, delta, raiz1, raiz2;
    scanf ("%lf %lf %lf", &a, &b, &c);
        delta=(b*b)-(4*a*c);
        if (delta<0){
          printf ("RAIZES IMAGINARIAS\n");
        }
        else {
          if (delta==0){
            raiz1=(-b)/(2*a);
            printf ("RAIZ UNICA\n");
            printf("X1 = %.2lf\n", raiz1);
          }
          else {
            raiz1=(-b+sqrt(delta))/(2*a);
            raiz2=(-b-sqrt(delta))/(2*a);
            printf ("RAIZES DISTINTAS\n");
            printf("X1 = %.2lf\n", raiz1);
            printf("X2 = %.2lf\n", raiz2);
          }
        }
      }
