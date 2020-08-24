#include <stdio.h>

  int main(){
    int q, i;
    scanf("%d", &q);
    int mat[q][q];
    int*p=*mat;
      for(i=0; i<(q*q); i++){
        scanf("%d", &p[i]);
      }
      for(i=0; i<q; i++){
        printf("%d\n", mat[i][i]);
      }
  }
