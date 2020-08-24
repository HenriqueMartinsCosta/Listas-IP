#include <stdio.h>

  int main(){
    int i, a, an, a1, a2, a3, b, bn, b1, b2, b3;
    scanf("%d", &i);
      for(; i>0; i--){
        scanf("%d %d", &a, &b);
        a3=a/100;
        a2=(a/10)%10;
        a1=a%10;
        an=a1*100+a2*10+a3;
        b3=b/100;
        b2=(b/10)%10;
        b1=b%10;
        bn=b1*100+b2*10+b3;
          if(an>bn){
            printf("%d\n", an);
          }
          else{
            printf("%d\n", bn);
          }
      }
  }
