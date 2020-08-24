#include <stdio.h>

  int main(){
    int n, i, j, j1, sena=0, quina=0, quadra=0, acertos=0;
    scanf("%d", &n);
    n++;
    int mat[n][6];
      for(i=0; i<n; i++){
        for(j=0; j<6; j++){
          scanf("%d", &mat[i][j]);
        }
      }
      for(i=0; i<(n-1); i++){
        for(j=0; j<6; j++){
          for(j1=0; j1<6; j1++){
            if(mat[i][j1]==mat[(n-1)][j]){
              acertos++;
            }
          }
        }
        if(acertos==6){
          sena++;
        }
        else if(acertos==5){
          quina++;
        }
        else if(acertos==4){
          quadra++;
        }
        acertos=0;
      }
      if(sena==0){
        printf("Nao houve acertador para sena\n");
      }
      else{
        printf("Houve %d acertador(es) da sena\n", sena);
      }
      if(quina==0){
        printf("Nao houve acertador para quina\n");
      }
      else{
        printf("Houve %d acertador(es) da quina\n", quina);
      }
      if(quadra==0){
        printf("Nao houve acertador para quadra\n");
      }
      else{
        printf("Houve %d acertador(es) da quadra\n", quadra);
      }
  }
