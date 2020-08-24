#include <stdio.h>
#include <string.h>

  int main(){
    int n, i, i1, i2, i3, a, b, tamanho1, tamanho2, tamanho;
    char string1[51], string2[51];
    scanf("%d", &n);
      for(i=0; i<n; i++){
        scanf("%s %s", &string1, &string2);
        getchar();
        tamanho1=strlen(string1);
        tamanho2=strlen(string2);
        tamanho=tamanho1+tamanho2;
        char string[tamanho];
        i2=0; i3=0; a=1; b=1;
          for(i1=0; i1<=tamanho; i1++){
            if(a<=tamanho1 && b<=tamanho2){
              if(i1==0 || i1%2==0){
                string[i1]=string1[i2];
                i2++;
                a++;
              }
              else{
                string[i1]=string2[i3];
                i3++;
                b++;
              }
            }
            else if(a>tamanho1 && b<=tamanho2){
              string[i1]=string2[i3];
              i3++;
            }
            else if(b>tamanho2 && a<=tamanho1){
              string[i1]=string1[i2];
              i2++;
            }
          }
          printf("%s\n", string);
      }
  }
