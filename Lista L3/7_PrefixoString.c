#include <stdio.h>
#include <string.h>

  int main(){
    int n, q, i, tamanho;
    char s[500];
    scanf("%d", &n);
      for(n; n>0; n--){
        scanf("%d %[^\n]", &q, &s);
        getchar();
        s[q]='\0';
        printf("%s\n", s);
      }
  }
