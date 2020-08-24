#include <stdio.h>

  int main(){
    int m, n, i, j, cont, aux=1;
    scanf("%d %d", &m, &n);
    int mat[m][n], *p=*mat;
      for(cont=1; cont<=(m*n); cont++){
        p[(cont-1)]=aux%2;
        aux++;
        if(cont%n==0 && n%2==0){
          aux--;
        }
      }
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
          printf("%d", mat[i][j]);
        }
        printf("\n");
      }
  }
