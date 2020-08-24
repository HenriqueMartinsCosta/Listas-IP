#include <stdio.h>

  int main(){
    int n, i, i1, j, aux;
    scanf("%d", &n);
    int mat[n][n];
      for(i=0; i<n; i++){
        for(j=0; j<n; j++){
          scanf("%d", &mat[i][j]);
        }
      }
      for(j=0; j<n; j++){
        for(i=0; i<n; i++){
          for(i1=0; i1<n; i1++){
            if(mat[i1][j]>mat[i][j]){
              aux=mat[i1][j];
              mat[i1][j]=mat[i][j];
              mat[i][j]=aux;
            }
          }
        }
      }
      for(i=0; i<n; i++){
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
