#include <stdio.h>

  int main(){
    unsigned long int mercadoria, mais_vendida, mais_lucrou;
    double preco_compra, preco_venda, vendas, vendas_total=0, mais_vendas=0, custo, custo_total=0, lucro, lucro_total=0, maior_lucro=0;
    int lucro1=0, lucro2=0, lucro3=0;
      while(scanf("%d %lf %lf %lf", &mercadoria, &preco_compra, &preco_venda, &vendas)!=EOF){
        custo=preco_compra*vendas;
        lucro=preco_venda*vendas-custo;
        lucro_total+=lucro;
        custo_total+=custo;
        vendas_total+=preco_venda*vendas;
          if(lucro>maior_lucro){
            mais_lucrou=mercadoria;
            maior_lucro=lucro;
          }
        lucro=lucro/custo;
          if(lucro<0.1){
            lucro1++;
          }
          if(lucro>=0.1 && lucro<=0.2){
            lucro2++;
          }
          if(lucro>0.2){
            lucro3++;
          }
          if(vendas>mais_vendas){
            mais_vendida=mercadoria;
            mais_vendas=vendas;
          }
      }
      lucro_total=(lucro_total/custo_total)*100;
      printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucro1);
      printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro2);
      printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro3);
      printf("Codigo da mercadoria que gerou maior lucro: %d\n", mais_lucrou);
      printf("Codigo da mercadoria mais vendida: %d\n", mais_vendida);
      printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", custo_total, vendas_total, lucro_total);
  }
