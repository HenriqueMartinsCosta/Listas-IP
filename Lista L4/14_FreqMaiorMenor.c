#include <stdio.h>

  int main(){
    int m, n, i, j, menor, q_menor=0, maior, q_maior=0;
    double freq_menor, freq_maior;
    scanf("%d %d", &m, &n);
    int mat[m][n], total=(m*n);
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
          }
          if(mat[i][j]>maior){
            maior=mat[i][j];
          }
        }
      }
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          if(mat[i][j]==menor){
            q_menor++;
          }
          if(mat[i][j]==maior){
            q_maior++;
          }
        }
      }
      freq_menor=((double)q_menor/(double)total)*100;
      printf("%d %.2lf%%\n", menor, freq_menor);
      freq_maior=((double)q_maior/(double)total)*100;
      printf("%d %.2lf%%\n", maior, freq_maior);
  }
