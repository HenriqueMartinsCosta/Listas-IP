#include <stdio.h>

void ordem_crescente(int* vet, int n){
  int i, i1, menor, indmenor, aux;
    for(i=0; i<(n-1); i++){
      menor=vet[i];
      indmenor=i;
      for(i1=(i+1); i1<n; i1++){
        if(vet[i1]<menor){
          menor=vet[i1];
          indmenor=i1;
        }
      }
      aux=vet[i];
      vet[i]=vet[indmenor];
      vet[indmenor]=aux;
    }
}

typedef struct alunos{
  int matricula, dia, mes, ano, data;
  char nome[200];
} alunos;

  int main(){
    int n, i, i1;
    scanf("%d", &n);
    int ordem[n];
    alunos aluno[n];
      for(i=0; i<n; i++){
        scanf("%d %d %d %d %[^\n]", &aluno[i].matricula, &aluno[i].dia, &aluno[i].mes, &aluno[i].ano, &aluno[i].nome);
        aluno[i].data=aluno[i].dia+aluno[i].mes*30+aluno[i].ano*365;
        ordem[i]=aluno[i].data;
      }
      ordem_crescente(ordem, n);
      for(i=(n-1); i>=0; i--){
        for(i1=0; i1<n; i1++){
          if(aluno[i1].data==ordem[i]){
            printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", aluno[i1].matricula, aluno[i1].nome, aluno[i1].dia, aluno[i1].mes, aluno[i1].ano);
          }
        }
      }
  }
