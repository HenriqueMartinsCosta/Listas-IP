#include <stdio.h>
#include <math.h>

typedef struct vetor{
  double u, x, y, z, norma;
} vetor;

void ordem_crescente(double* vet, int n){
  int i, i1, indmenor;
  double menor, aux;
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

  int main(){
    int n, i, j;
    scanf("%d", &n);
    double ordem[n];
    vetor vet[n];
      for(i=0; i<n; i++){
        scanf("%lf %lf %lf %lf", &vet[i].u, &vet[i].x, &vet[i].y, &vet[i].z);
        vet[i].norma=sqrt(pow(vet[i].u, 2)+pow(vet[i].x, 2)+pow(vet[i].y, 2)+pow(vet[i].z, 2));
        ordem[i]=vet[i].norma;
      }
      ordem_crescente(ordem, n);
      for(i=0; i<n; i++){
        for(j=0; j<n; j++){
          if(ordem[i]==vet[j].norma){
            printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", vet[j].u, vet[j].x, vet[j].y, vet[j].z, vet[j].norma);
          }
        }
      }
  }
