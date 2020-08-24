#include <stdio.h>

 int main(){
   unsigned int conta;
   float valor, consumo;
   char tipo;
    scanf("%d %f %c", &conta, &consumo, &tipo);
    if(tipo=='R'){
      valor=(consumo*0.05)+5;
    }
    else{
      if(tipo=='C'){
        valor=(consumo-80)*0.25+500;
      }
      else{
        if(tipo=='I'){
          valor=(consumo-100)*0.04+800;
        }
      }
    }
    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", valor);
 }
