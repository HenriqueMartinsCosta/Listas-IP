#include <stdio.h>

  int main(){
    int n, i, ordem=0;
    double anterior, atual;
    scanf("%d", &n);
    scanf("%lf", &anterior);
      while(n>=2){
          for(i=2; i<=n; i++){
            scanf("%lf", &atual);
              if(anterior>atual){
                ordem++;
              }
            anterior=atual;
          }
          if(ordem>0){
            printf("DESORDENADA\n");
          }
          else{
            printf("ORDENADA\n");
          }
          ordem=0;
          scanf("%d", &n);
          scanf("%lf", &anterior);
      }
  }
