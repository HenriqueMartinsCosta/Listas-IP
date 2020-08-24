#include <stdio.h>
 int main (){
   double salario_minimo, gasto_kw, custo_kw, custo_consumo, custo_desconto;
    scanf ("%lf %lf", &salario_minimo, &gasto_kw);
      custo_kw=(salario_minimo*0.7)/100;
      custo_consumo=gasto_kw*custo_kw;
      custo_desconto=custo_consumo-(custo_consumo*0.1);
    printf("Custo por kW: R$ %.2lf\n", custo_kw);
    printf("Custo do consumo: R$ %.2lf\n", custo_consumo);
    printf("Custo com desconto: R$ %.2lf\n", custo_desconto);
 }
