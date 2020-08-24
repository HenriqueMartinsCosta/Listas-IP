#include <stdio.h>
#include <math.h>

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
    int n, i, i1;
    scanf("%d", &n);
    double pontos[(n*3)], v[3];
      for(i=0; i<(n*3); i++){
        scanf("%lf", &pontos[i]);
      }
      for(i=0; i<(n-1); i++){
        i1=i*3;
        v[0]=fabs((pontos[(i1+3)]-pontos[i1]));
        v[1]=fabs((pontos[(i1+4)]-pontos[(i1+1)]));
        v[2]=fabs((pontos[(i1+5)]-pontos[(i1+2)]));
        ordem_crescente(v, 3);
        printf("%.2lf\n", v[2]);
      }
  }
