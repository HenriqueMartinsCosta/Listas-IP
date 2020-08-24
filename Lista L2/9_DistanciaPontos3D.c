#include <stdio.h>
#include <math.h>

  int main(){
    int n, i, i1;
    scanf("%d", &n);
    double num, pontos[(n*3)], distancia, x;
      for(i=0; i<(n*3); i++){
        scanf("%lf", &num);
        pontos[i]=num;
      }
      for(i=0; i<(n-1); i++){
        i1=i*3;
        x=pow((pontos[i1]-pontos[(i1+3)]), 2)+pow((pontos[(i1+1)]-pontos[(i1+4)]), 2)+pow((pontos[(i1+2)]-pontos[(i1+5)]), 2);
        distancia=sqrt(x);
        printf("%.2lf\n", distancia);
      }
  }
