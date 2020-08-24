#include <stdio.h>
#include <string.h>

  int main(){
    double a, b, c, d, a1, b1, c1, d1;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
      a1=a*a+b*c;
      b1=a*b+b*d;
      c1=c*a+d*c;
      d1=c*b+d*d;
    printf("%.3lf %.3lf\n%.3lf %.3lf", a1, b1, c1, d1);
  }
