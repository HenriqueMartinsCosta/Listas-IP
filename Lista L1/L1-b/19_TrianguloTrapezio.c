#include <stdio.h>
#include <math.h>

  int main(){
    double a, b, c, bc, bc1, ac, ac1, ab, ab1, perimetro, area;
    scanf("%lf %lf %lf", &a, &b, &c);
      bc=b+c;
      bc1=fabs(b-c);
      ac=a+c;
      ac1=fabs(a-c);
      ab=a+b;
      ab1=fabs(a-b);
        if(bc>a && a>bc1 && ac>b && b>ac1 && ab>c && c>ab1){
          perimetro=a+b+c;
            printf("Perimetro = %.1lf\n", perimetro);
        }
        else{
          area=((a+b)*c)/2;
            printf("Area = %.1lf\n", area);
        }
  }
