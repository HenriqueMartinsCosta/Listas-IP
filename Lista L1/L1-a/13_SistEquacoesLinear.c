#include <stdio.h>

  int main(){
    double a, b, c, d, e, f, x, y, determinante, determinante_x, determinante_y;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
      determinante=(a*e)-(b*d);
      determinante_x=(c*e)-(b*f);
      determinante_y=(a*f)-(c*d);
      x=determinante_x/determinante;
      y=determinante_y/determinante;
    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);
  }
