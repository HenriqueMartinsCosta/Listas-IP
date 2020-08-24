#include <stdio.h>
#include <math.h>

  int main(){
    int numero, q1=2, q2;
    scanf("%d", &numero);
      while(numero>q1){
        q2 = pow(q1,2);
          printf("%d^2 = %d\n", q1, q2);
            q1 += 2;
      }
      q2 = pow(q1,2);
        printf("%d^2 = %d\n", q1, q2);
  }
