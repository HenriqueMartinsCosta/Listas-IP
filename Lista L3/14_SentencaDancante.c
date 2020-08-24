#include <stdio.h>
#include <string.h>

  int main(){
    int q, i, tamanho;
    char s[50];
      while(scanf("%[^\n]", &s)!=EOF){
        getchar();
        tamanho=strlen(s);
        q=0;
          for(i=0; i<tamanho; i++){
             if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
               q++;
                if(q%2==0 && s[i]>=65 && s[i]<=90){
                  s[i]+=32;
                }
                else if(q%2!=0 && s[i]>=97 && s[i]<=122){
                  s[i]-=32;
                }
             }
          }
          printf("%s\n", s);
      }
  }
