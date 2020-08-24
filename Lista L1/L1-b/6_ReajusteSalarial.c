#include <stdio.h>

  int main(){
    float salario, reajuste;
    scanf("%f", &salario);
      if(salario<=300){
        reajuste=(salario*0.5)+salario;
      }
      else{
        reajuste=(salario*0.3)+salario;
      }
    printf("SALARIO COM REAJUSTE = %.2f\n", reajuste);
  }
