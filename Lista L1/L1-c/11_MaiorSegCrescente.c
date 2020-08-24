#include <stdio.h>

  int main(){
    int n, atual, anterior, i, k=1, kmax=0;
    scanf("%d", &n);
    scanf("%d", &anterior);
      for(i=2; i<=n; i++){
        scanf("%d", &atual);
        if(anterior<atual){
          k++;
          anterior=atual;
        }
        else{
          k=1;
          anterior=atual;
        }
        if(k>kmax && k!=1){
          kmax=k;
        }
      }
      kmax--;
      printf("O comprimento do segmento crescente maximo e: %d\n", kmax);
  }
