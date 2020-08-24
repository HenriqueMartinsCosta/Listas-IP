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

  int main(){
    int n, i, i1, par=0, impar=0;
    scanf("%d", &n);
    int v[n];
      for(i=0; i<n; i++){
        scanf("%d", &v[i]);
        if(v[i]%2==0){
          par++;
        }
        else{
          impar++;
        }
      }
    int pares[par], impares[impar];
      i1=0;
      for(i=0; i<par;){
        for(i1; i1<n; i1++){
          if(v[i1]%2==0){
            pares[i]=v[i1];
            i++;
          }
        }
      }
      i1=0;
      for(i=0; i<impar;){
        for(i1; i1<n; i1++){
          if(v[i1]%2!=0){
            impares[i]=v[i1];
            i++;
          }
        }
      }
      ordem_crescente(pares, par);
      ordem_crescente(impares, impar);
      for(i=0; i<par; i++){
          printf("%d\n", pares[i]);
      }
      for(i=(impar-1); i>=0; i--){
        printf("%d\n", impares[i]);
      }
  }
