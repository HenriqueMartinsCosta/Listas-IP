#include <stdio.h>
#include <string.h>

  int main(){
    int n, i, i1, q, tamanho;
    char s[100000], s1[100000];
    scanf("%d", &n);
      for(n; n>0; n--){
        scanf("%s", &s);
        getchar();
        scanf("%s", &s1);
        getchar();
        tamanho=strlen(s);
        q=0;
          for(i=0; i<tamanho; i++){
            if(s[i]>s1[i]){
              s1[i]+=26;
            }
            for(s[i]; s[i]<s1[i]; s[i]++){
              q++;
            }
          }
          printf("%d\n", q);
      }
  }
