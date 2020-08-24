#include <stdio.h>

  int main(){
    int m, n, i, j, menor, i_menor, j_menor, maior, i_maior, j_maior;
    scanf("%d %d", &m, &n);
    int mat[m][n];
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          scanf("%d", &mat[i][j]);
        }
      }
      menor=mat[0][0]; maior=mat[0][0];
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          if(mat[i][j]<menor){
            menor=mat[i][j];
            i_menor=i;
            j_menor=j;
          }
          if(mat[i][j]>maior){
            maior=mat[i][j];
            i_maior=i;
            j_maior=j;
          }
        }
      }
      mat[i_menor][j_menor]=maior;
      mat[i_maior][j_maior]=menor;
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          if(j<(n-1)){
            printf("%d ", mat[i][j]);
          }
          else{
            printf("%d\n", mat[i][j]);
          }
        }
      }
  }
