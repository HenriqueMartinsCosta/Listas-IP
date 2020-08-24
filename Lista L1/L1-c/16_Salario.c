#include <stdio.h>

  int main(){
    int matricula=1;
    double horas, valor, salario;
      while(matricula>0){
        scanf("%d %lf %lf", &matricula, &horas, &valor);
          if(matricula<=0){
            return 0;
          }
          else{
            salario=horas*valor;
            printf("%d %.2lf\n", matricula, salario);
          }
      }
  }
