#include <stdio.h>

  int main(){
    int n, i, j, i1, tr=0, r;
    scanf("%d", &n);
    int mat[n][n];
      for(j=0; j<n; j++){
        for(i=0; i<n; i++){
          scanf("%d", &mat[i][j]);
        }
      }
      for(i1=0; i1<n; i1++){
        tr+=mat[i1][i1];
      }
      for(j=0; j<n; j++){
        for(i=0; i<n; i++){
          r=tr*mat[i][j]+mat[j][i];
          if(i==(n-1)){
            printf("%d\n", r);
          }
          else{
            printf("%d ", r);
          }
        }
      }
  }
