#include <stdio.h>

  int main(){
    int n;
    double pares=0, impares=0, quantidade_pares=0, quantidade_impares=0, media_pares, media_impares;
    scanf("%d", &n);
      while(n!=0){
        if(n%2==0 && n!=0){
          pares += n;
          quantidade_pares++;
        }
        else{
          if(n!=0){
            impares += n;
            quantidade_impares++;
          }
        }
        scanf("%d", &n);
      }
      media_pares=pares/quantidade_pares;
      media_impares=impares/quantidade_impares;
        if(pares==0){
          printf("MEDIA PAR: 0.00\n");
        }
        else{
          printf("MEDIA PAR: %.2lf\n", media_pares);
        }
        if(impares==0){
          printf("MEDIA IMPAR: 0.00\n");
        }
        else{
          printf("MEDIA IMPAR: %.2lf\n", media_impares);
        }
  }
