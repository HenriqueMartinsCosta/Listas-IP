#include <stdio.h>

void ordem_crescente(int* vet, int n){
  int i, i1, aux;
    for(i=0; i<n; i++){
      for(i1=0; i1<n; i1++){
        if(vet[i]<vet[i1]){
          aux=vet[i];
          vet[i]=vet[i1];
          vet[i1]=aux;
        }
      }
    }
  }

  int main(){
    int n, num, i, i1, aux;
    double n1, n2, mediana;
    scanf("%d", &n);
    int vet[n];
      for(i=0; i<n; i++){
        scanf("%d", &num);
        vet[i]=num;
      }
      ordem_crescente(vet, n);
      if(n%2==0){
        n1=vet[((n/2)-1)];
        n2=vet[(n/2)];
        mediana=(n1+n2)/2;
      }
      else{
        mediana=vet[(n/2)];
      }
      printf("%.2lf\n", mediana);
  }
