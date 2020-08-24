#include <stdio.h>

  int main(){
    int q1, q2, q, i, i1, n, n_maior, maior=-1;
    scanf("%d", &q1);
    scanf("%d", &q2);
    q=q1+q2;
    int v1[q], vet[q];
      for(i=1; i<=q; i++){
        scanf("%d", &n);
        v1[i]=n;
      }
      for(i=1; i<=q; i++){
        for(i1=1; i1<=q; i1++){
          if(v1[i1]>maior){
            vet[i]=v1[i1];
            maior=v1[i1];
            n_maior=i1;
          }
        }
        v1[n_maior]=-2;
        maior=-1;
      }
      for(i=q; i>0; i--){
        printf("%d\n", vet[i]);
      }
  }
