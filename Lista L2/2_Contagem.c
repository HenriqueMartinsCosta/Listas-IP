#include <stdio.h>

  int main(){
    int n, i, i1, i2, k, q=0;
    repetir:
    scanf("%d", &i);
      if(i<1 || i>1000){
        goto repetir;
      }
      int vet[i];
      for(i1=1; i1<=i; i1++){
        scanf("%d", &n);
        vet[i1]=n;
      }
      scanf("%d", &k);
        for(i2=1; i2<=i; i2++){
          if(vet[i2]>=k){
            q++;
          }
        }
        printf("%d\n", q);
  }
