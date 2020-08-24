#include <stdio.h>

  int main(){
    int n, m, i, j, w=0, wi=-1, wj=-1;
    scanf("%d %d", &n, &m);
    int mat[m][n];
      for(j=0; j<n; j++){
        for(i=0; i<m; i++){
          scanf("%d", &mat[i][j]);
        }
      }
      for(j=0; j<n; j++){
        for(i=0; i<m; i++){
          if(mat[i][j]==1111){
            if(i==0){
              if(mat[(m-1)][j]==0 && mat[(i+1)][j]==0){
                w++;
              }
            }
            else if(i==(m-1)){
              if(mat[(i-1)][j]==0 && mat[0][j]==0){
                w++;
              }
            }
            else{
              if(mat[(i-1)][j]==0 && mat[(i+1)][j]==0){
                w++;
              }
            }
            if(j==0){
              if(mat[i][(n-1)]==4 && mat[i][(j+1)]==8){
                w++;
              }
            }
            else if(j==(n-1)){
              if(mat[i][(j-1)]==4 && mat[i][0]==8){
                w++;
              }
            }
            else{
              if(mat[i][(j-1)]==4 && mat[i][(j+1)]==8){
                w++;
              }
            }
            if(w==2){
              wi=i; wj=j;
            }
            else{
              w=0;
            }
          }
        }
      }
      if(wi!=-1 && wj!=-1){
        printf("%d %d\n", wj, wi);
      }
      else{
        printf("WALLY NAO ESTA NA MATRIZ\n");
      }
  }
