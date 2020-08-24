#include <stdio.h>

  int main(){
    int n, num, i, i1, menor, maior;
    scanf("%d", &n);
    int v1[n], vet[n];
      for(i=0; i<n; i++){
        scanf("%d", &num);
        v1[i]=num;
      }
      menor=v1[0];
      maior=v1[0];
      for(i=0; i<n; i++){
        if(v1[i]<menor){
          menor=v1[i];
        }
        if(v1[i]>maior){
          maior=v1[i];
        }
      }
      for(i=0; i<n; ){
        for(menor; menor<=maior; menor++){
          for(i1=0; i1<n; i1++){
            if(v1[i1]==menor){
              vet[i]=menor;
              i++;
            }
          }
        }
      }
      for(i=0; i<n; i++){
        printf("%d\n", vet[i]);
      }
  }
