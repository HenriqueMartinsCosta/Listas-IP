#include <stdio.h>
#include <string.h>

  int main(){
    int q, i, tamanho;
    char s[5000], ant, atual, primeira;
      while(scanf("%[^\n]", &s)!=EOF){
        getchar();
        q=0; ant=0; atual=0; primeira=0;
        tamanho=strlen(s);
          for(i=0; i<tamanho; i++){
            if(i==0){
              atual=s[i];
            }
            if(s[i]==32){
              atual=s[(i+1)];
            }
            if(i==0 || s[i]==32){
                if(atual>=65 && atual<=90 && primeira>=97 && primeira<=122){
                  primeira-=32;
                }
                if(atual>=97 && atual<=122 && primeira>=65 && primeira<=90){
                primeira+=32;
                }
                if(atual>=65 && atual<=90 && ant>=97 && ant<=122){
                  ant-=32;
                }
                if(atual>=97 && atual<=122 && ant>=65 && ant<=90){
                  ant+=32;
                }
                if(atual!=ant){
                  primeira=atual;
                }
                if(atual==ant && atual==primeira){
                  q++;
                  primeira+=1;
                }
                ant=atual;
            }
          }
          printf("%d\n", q);
      }
  }
