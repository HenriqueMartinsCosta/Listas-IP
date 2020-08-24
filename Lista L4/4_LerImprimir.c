#include <stdio.h>

  int main(){
    int m, n, i, j, cont;
repetir:
    scanf("%d", &m);
      if(m<=0 || m>10){
        goto repetir;
      }
repetir2:
    scanf("%d", &n);
      if(n<=0 || n>10){
        goto repetir2;
      }
    int mat[m][n];
    int*p=*mat;
      for(cont=0; cont<(m*n); cont++){
        scanf("%d", &p[cont]);
      }
      for(i=0; i<m; i++){
        printf("linha %d: ", (i+1));
        for(j=0; j<n; j++){
          printf("%d", mat[i][j]);
            if(j==(n-1)){
              printf("\n");
            }
            else{
              printf(",");
            }
        }
      }
  }
