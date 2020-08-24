#include <stdio.h>
#include <string.h>

  int main(){
    int q=0, i, i1, tamanho, tamanho1;
    char s[256], s1[256], str[256];
    scanf("%[^\n]", &s);
    getchar();
    scanf("%[^\n]", &s1);
    getchar();
    tamanho=strlen(s); tamanho1=strlen(s1);
      for(i=0; i<tamanho; i++){
        for(i1=0; i1<tamanho1; i1++){
          if(s[i]==s1[i1]){
            s[i]=0;
          }
        }
      }
      for(i=0; i<tamanho; i++){
        if(s[i]!=0){
          str[q]=s[i];
          q++;
        }
      }
      str[q]='\0';
      printf("%s\n", str);
  }
