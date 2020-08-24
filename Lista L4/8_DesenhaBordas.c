#include <stdio.h>

  int main(){
    int l, a, b, n, i, i1, j;
    scanf("%d %d %d %d", &l, &a, &b, &n);
    int mat[l][a];
      for(j=0; j<a; j++){
        for(i=0; i<l; i++){
          if(j<b || j>=(a-b)){
            mat[i][j]=n;
          }
          else if(i<b || i>=(l-b)){
            mat[i][j]=n;
          }
          else{
            mat[i][j]=0;
          }
        }
      }
      printf("P2\n%d %d\n255\n", l, a);
      for(j=0; j<a; j++){
        for(i=0; i<l; i++){
            if(i==(l-1)){
              printf("%d\n", mat[i][j]);
            }
            else{
              printf("%d ", mat[i][j]);
            }
        }
      }
  }
