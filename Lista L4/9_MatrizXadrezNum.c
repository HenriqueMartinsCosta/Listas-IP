#include <stdio.h>

  int main(){
    int a, l, i, j=1, i1=1;
    scanf("%d %d", &a, &l);
    int p[((a*l)+1)];
      for(i=1; i<=((l*a)+1); i++){
        if(i%2==0){
          p[(i-1)]=i1;
          i1++;
        }
        else{
          p[(i-1)]=0;
        }
      }
      i1=0;
      while(i1<(a*l)){
        if(j%2==0 && l%2==0){
          i1++;
        }
        else if(l%2==0 && j>1){
          i1--;
        }
        for(i=1; i<=l; i++){
          if(i==l){
            printf("%d\n", p[i1]);
          }
          else{
            printf("%d ", p[i1]);
          }
          i1++;
        }
        j++;
      }
  }
