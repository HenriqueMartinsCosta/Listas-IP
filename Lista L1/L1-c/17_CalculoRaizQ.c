#include <stdio.h>
#include <math.h>

  int main(){
    double n, r, rk, e, ek=1;
      scanf("%lf %lf", &n, &e);
        for(rk=1; ek>e;){
          rk=(rk+(n/rk))/2;
          ek=fabs(n-rk*rk);
            printf("r: %.9lf, erro: %.9lf\n", rk, ek);
        }
  }
