#include <stdio.h>

  int main(){
    int n, i, total, cont=0, temp, impar, a;
    scanf("%d", &n);
      for(i=1; i<=n; i++){
        total=i*i*i;
        printf("%d*%d*%d = ", i, i, i);
        a=0;
          for(temp=1; temp<=total; cont++){
            a++;
            impar=2*cont+1;
            temp+=impar;
              if(a==1){
                printf("%d", impar);
              }
              else if(a>1 && a<=i){
                printf("+%d", impar);
              }
              if(a==i){
                printf("\n");
              }
          }
        }
      }
