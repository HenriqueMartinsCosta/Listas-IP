#include <stdio.h>

  int main(){
    int matricula;
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, nt, presenca, mp, ml, nf;
      while(matricula>=0){
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &nt, &presenca);
        mp=(p1+p2+p3+p4+p5+p6+p7+p8)/8;
        ml=(l1+l2+l3+l4+l5)/5;
        nf=(mp*0.7)+(ml*0.15)+(nt*0.15);
        if(matricula<0){
          printf("");
        }
        else{
          if(nf>=6 && presenca>=96){
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nf);
          }
          if(nf<6 && presenca>=96){
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nf);
          }
          if(nf>=6 && presenca<96){
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nf);
          }
          if(nf<6 && presenca<96){
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nf);
          }
        }
      }
  }
