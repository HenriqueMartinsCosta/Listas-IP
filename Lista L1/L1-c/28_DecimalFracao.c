#include <stdio.h>

  int main(){
    double n, num=1, den=1, x=0;
    scanf("%lf", &n);
      while(x!=n){
        if(x<n){
          num++;
        }
        else{
          den++;
        }
        x=num/den;
        if(x==n){
          printf("%.0lf/%.0lf\n", num, den);
        }
      }
  }
