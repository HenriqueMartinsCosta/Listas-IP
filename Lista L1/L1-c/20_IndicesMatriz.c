#include <stdio.h>

  int main(){
    int m, n, mm, nn, i=0;
    scanf("%d %d", &m, &n);
       for(mm=2; mm<=m; mm++){
         i=mm-1;
          for(nn=1; nn<=n && i>0; nn++ && i--){
            printf("(%d,%d)", mm, nn);
              if(i>1 && nn!=n){
                printf("-");
              }
              else{
                printf("\n");
              }
          }
       }
  }
