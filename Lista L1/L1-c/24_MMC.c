#include <stdio.h>

  int main(){
    int n1, n2, n3, fator=2, mmc=1;
    scanf("%d %d %d", &n1, &n2, &n3);
    while(n1>1 || n2>1 || n3>1){
        if(n1%fator==0 && n2%fator==0 && n3%fator==0){
          printf("%d %d %d :%d\n", n1, n2, n3, fator);
          n1=n1/fator;
          n2=n2/fator;
          n3=n3/fator;
          mmc=mmc*fator;
        }
        else if(n1%fator!=0 && n2%fator==0 && n3%fator==0){
          printf("%d %d %d :%d\n", n1, n2, n3, fator);
          n2=n2/fator;
          n3=n3/fator;
          mmc=mmc*fator;
        }
        else if(n1%fator==0 && n2%fator!=0 && n3%fator==0){
          printf("%d %d %d :%d\n", n1, n2, n3, fator);
          n1=n1/fator;
          n3=n3/fator;
          mmc=mmc*fator;
        }
        else if(n1%fator==0 && n2%fator==0 && n3%fator!=0){
          printf("%d %d %d :%d\n", n1, n2, n3, fator);
          n1=n1/fator;
          n2=n2/fator;
          mmc=mmc*fator;
        }
        else if(n1%fator==0 && n2%fator!=0 && n3%fator!=0){
          printf("%d %d %d :%d\n", n1, n2, n3, fator);
          n1=n1/fator;
          mmc=mmc*fator;
        }
        else if(n1%fator!=0 && n2%fator==0 && n3%fator!=0){
          printf("%d %d %d :%d\n", n1, n2, n3, fator);
          n2=n2/fator;
          mmc=mmc*fator;
        }
        else if(n1%fator!=0 && n2%fator!=0 && n3%fator==0){
          printf("%d %d %d :%d\n", n1, n2, n3, fator);
          n3=n3/fator;
          mmc=mmc*fator;
        }
        else{
          fator++;
        }
    }
    printf("MMC: %d\n", mmc);
  }
