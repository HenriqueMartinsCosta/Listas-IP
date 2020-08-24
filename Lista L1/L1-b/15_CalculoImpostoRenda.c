#include <stdio.h>

  int main(){
    int matricula, dependentes;
    double salario_minimo, salario_funcionario, taxa_imposto, imposto_normal, imposto_bruto, imposto_liquido, imposto_pagar;
    scanf("%d %lf %d %lf %lf", &matricula, &salario_minimo, &dependentes, &salario_funcionario, &taxa_imposto);
      if(salario_funcionario>12*salario_minimo){
        imposto_bruto=salario_funcionario*0.2;
      }
      if(salario_funcionario>5*salario_minimo && salario_funcionario<=12*salario_minimo){
        imposto_bruto=salario_funcionario*0.08;
      }
      if(salario_funcionario<=5*salario_minimo){
        imposto_bruto=0;
      }
    imposto_liquido=imposto_bruto-(dependentes*300);
    imposto_normal=salario_funcionario*(taxa_imposto*0.01);
    imposto_pagar=imposto_liquido-imposto_normal;
    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
    printf("IMPOSTO LIQUIDO = %.2lf\n", imposto_liquido);
    printf("RESULTADO = %.2lf\n", imposto_pagar);
      if(imposto_pagar==0){
        printf("IMPOSTO QUITADO\n");
      }
      if(imposto_pagar<0){
        printf("IMPOSTO A RECEBER\n");
      }
      else{
        printf("IMPOSTO A PAGAR\n");
      }
  }
