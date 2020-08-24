#include <stdio.h>

  int main(){
    int n, num, i, i1, q, qmaior=0;
    scanf("%d", &n);
    int vet[n];
      for(i=0; i<n; i++){
        scanf("%d", &num);
        vet[i]=num;
      }
      for(i=0; i<=100; i++){
        q=0;
        for(i1=0; i1<n; i1++){
          if(i==vet[i1]){
            q++;
          }
        }
        if(q>qmaior){
          qmaior=q;
          num=i;
        }
      }
      printf("%d\n", num);
      printf("%d\n", qmaior);
  }
