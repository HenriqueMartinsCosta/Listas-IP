#include <stdio.h>

  int main(){
    float custo_fabrica, distribuidor, impostos, custo_final;
    scanf("%f %f %f", &custo_fabrica, &distribuidor, &impostos);
     custo_final=custo_fabrica+(custo_fabrica*(distribuidor*0.01))+(custo_fabrica*(impostos*0.01));
    printf("O VALOR DO CARRO E = %.2f\n", custo_final);
  }
