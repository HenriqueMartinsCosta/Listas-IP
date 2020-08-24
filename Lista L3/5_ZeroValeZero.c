#include <stdio.h>
#include <string.h>

  int main(){
    int m, n, soma, tamanho, i;
    char s[100000];
    scanf("%d %d", &m, &n);
    getchar();
      while(m!=0 && n!=0){
        soma=m+n;
        sprintf(s, "%d", soma);
        tamanho=strlen(s);
          for(i=0; i<tamanho; i++){
            if(s[i]!='0'){
              printf("%c", s[i]);
            }
            if(i==(tamanho-1)){
              printf("\n");
            }
          }
          scanf("%d %d", &m, &n);
          getchar();
      }
  }
