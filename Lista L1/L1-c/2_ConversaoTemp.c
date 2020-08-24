#include <stdio.h>

  int main(){
    int temperaturas;
    double f, c;
    scanf("%d", &temperaturas);
      while(temperaturas>0){
        temperaturas -= 1;
        scanf("%lf", &f);
          c=(5*(f-32))/9;
            printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", f, c);
      }
  }
