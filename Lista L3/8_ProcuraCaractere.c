#include <stdio.h>
#include <string.h>

  int main(){
    int n, i, ind, tamanho;
    char c, s[500];
    scanf("%d", &n);
    getchar();
      for(n; n>0; n--){
        scanf("%c %[^\n]", &c, &s);
        getchar();
        tamanho=strlen(s);
          for(i=0; i<tamanho; i++){
            if(s[i]==c){
              break;
            }
          }
          if(i==tamanho){
            printf("Caractere %c nao encontrado.\n", c);
          }
          else{
            printf("Caractere %c encontrado no indice %d da string.\n", c, i);
          }
      }
  }
