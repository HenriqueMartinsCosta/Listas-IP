#include <stdio.h>

  int main(){
    int testes, jogo=0;
    double pessoas, popular, geral, arquibancadas, cadeiras, renda;
    scanf("%d", &testes);
      while(testes>0){
        testes -= 1;
        scanf("%lf %lf %lf %lf %lf", &pessoas, &popular, &geral, &arquibancadas, &cadeiras);
          renda=(pessoas*(popular*0.01))+(pessoas*(geral*0.01))*5+(pessoas*(arquibancadas*0.01))*10+(pessoas*(cadeiras*0.01))*20;
          jogo += 1;
            printf("A RENDA DO JOGO N. %d E = %.2lf\n", jogo, renda);
      }
  }
