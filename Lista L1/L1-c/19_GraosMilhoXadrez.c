#include <stdio.h>

  int main(){
    int n, total=0, i;
    scanf("%d", &n);
      for(i=2; i<=64; i++){
        if(i%2==0){
          total += n*2;
        }
        else{
          total += n;
        }
      }
        printf("%d", total);
  }
