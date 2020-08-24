#include <stdio.h>

  int main(){
    int q1, q2, qi, tamanho_i=0, diferentes, q, n, i, i1;
    repetir1:
    scanf("%d", &q1);
      if(q1<1 || q1>100){
        goto repetir1;
      }
    int a[q1], tamanho_u=q1;
    repetir2:
    scanf("%d", &q2);
      if(q2<1 || q2>100){
        goto repetir2;
      }
    q=q1+q2;
    int b[q2], aub[q], aib[q];
      for(i=0; i<q1; i++){
        a[i]=-1;
      }
      for(i=0; i<q1; i++){
        repetir3:
        scanf("%d", &n);
        diferentes=0;
          for(i1=0; i1<q1; i1++){
            if(n!=a[i1]){
              diferentes++;
            }
          }
          if(diferentes==q1){
            a[i]=n;
            aub[i]=n;
          }
          else{
            goto repetir4;
          }
      }
      for(i=0; i<q2; i++){
        b[i]=-1;
      }
      for(i=0; i<q2; i++){
        repetir4:
        scanf("%d", &n);
        diferentes=0;
          for(i1=0; i1<q2; i1++){
            if(n!=b[i1]){
              diferentes++;
            }
          }
          if(diferentes==q2){
            b[i]=n;
          }
          else{
            goto repetir4;
          }
      }
      //Uniao
      for(i=0; i<q2; i++){
        diferentes=0;
          for(i1=0; i1<q1; i1++){
            if(a[i1]!=b[i]){
              diferentes++;
            }
          }
          if(diferentes==q1){
            aub[tamanho_u]=b[i];
            tamanho_u++;
          }
      }
      for(i=0; i<tamanho_u; i++){
          if(i==0){
            printf("(");
          }
        printf("%d", aub[i]);
          if(i==(tamanho_u-1)){
            printf(")\n");
          }
          else{
            printf(",");
          }
      }
      //Interseccao
      for(i=0; i<q2; i++){
        for(i1=0; i1<q1; i1++){
          if(b[i]==a[i1]){
            aib[tamanho_i]=a[i1];
            tamanho_i++;
          }
          else{
            aib[tamanho_i]=-1;
          }
        }
      }
        printf("(");
      for(i=0; i<tamanho_i; i++){
          if(aib[i]>-1){
            printf("%d", aib[i]);
          }
          else{
            printf("");
          }
          if(i<(tamanho_i-1) && aib[i]!=-1){
            printf(",");
          }
      }
        printf(")\n");
  }
