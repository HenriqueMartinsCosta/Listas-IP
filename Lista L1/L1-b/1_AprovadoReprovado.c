#include <stdio.h>

  int main(){
    float nota1, nota2, nota3, nota_final;
    scanf("%f %f %f", &nota1, &nota2, &nota3);
      nota_final=(nota1+nota2+nota3)/3;
    printf("MEDIA = %.2f\n", nota_final);
    if(nota_final>=6){
      printf("APROVADO\n");
    }
    else{
      printf("REPROVADO\n");
    }
  }
