#include <stdio.h>

  int main(){
    int n, k, q=0, i, i1=0;
    scanf("%d %d", &n, &k);
    int a[n], v[n];
      for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]<=0){
          q++;
          v[i1]=(i+1);
          i1++;
        }
      }
      if(q>=k){
        printf("NAO\n");
        for(i=(i1-1); i>=0; i--){
          printf("%d\n", v[i]);
        }
      }
      else{
        printf("SIM");
      }
  }
