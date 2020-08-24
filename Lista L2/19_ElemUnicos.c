#include <stdio.h>

  int main(){
    int n, i, i1;
    scanf("%d", &n);
    float v[n];
      for(i=0; i<n; i++){
        scanf("%f", &v[i]);
      }
      for(i=0; i<n; i++){
        if(i<(n-1)){
          for(i1=(i+1); i1<n; i1++){
            if(v[i]==v[i1]){
              v[i1]=0.5;
            }
          }
        }
        if(i>0){
          for(i1=(i-1); i1<n; i1++){
            if(v[i]==v[i1]){
              v[i1]==0.5;
            }
          }
        }
      }
      for(i=0; i<n; i++){
        if(v[i]!=0.5){
          printf("%.0f\n", v[i]);
        }
      }
  }
