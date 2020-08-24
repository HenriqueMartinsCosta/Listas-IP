#include <stdio.h>

  int main(){
    int n, time_a=1, time_b=1, i;
    scanf("%d", &n);
    if(n<2){
      printf("Campeonato invalido!\n");
    }
    else{
      for(i=1; time_a<(n-1); i++){
        time_b++;
          if(time_b>n){
            time_a++;
            time_b=time_a+1;
          }
          if(time_a>=n){
            time_a=1;
          }
        printf("Final %d: Time%d X Time%d\n", i, time_a, time_b);
      }
    }
    if(n==2){
      printf("Final 1: Time1 X Time2\n");
    }
  }
