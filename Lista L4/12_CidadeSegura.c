#include <stdio.h>

  int main(){
    int n, tamanho, i, j, q=0;
    scanf("%d", &n); tamanho=n+1;
    int mat[tamanho][tamanho];
      for(i=0; i<tamanho; i++){
        for(j=0; j<tamanho; j++){
          scanf("%d", &mat[i][j]);
        }
      }
      for(i=0; i<n; i++){
        for(j=0; j<n; j++){
          if(mat[i][j]==1){
            q++;
          }
          if(mat[i][(j+1)]==1){
            q++;
          }
          if(mat[(i+1)][j]==1){
            q++;
          }
          if(mat[i+1][j+1]==1){
            q++;
          }
          if(q>=2){
            printf("S");
          }
          else{
            printf("U");
          }
          q=0;
        }
        printf("\n");
      }
  }
