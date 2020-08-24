#include <stdio.h>
#include <string.h>

void inverte(char* normal, char* inversa, int t){
  int i, i1=0;
    for(i=(t-1); i>=0; i--){
      inversa[i1]=normal[i];
      i1++;
    }
}

  int main(){
    int n, i, tamanho;
    char s[10000], s_inv[10000], aux;
    scanf("%d", &n);
    getchar();
      for(n; n>=1; n--){
        scanf("%[^\n]", &s);
        getchar();
        tamanho=strlen(s);
          for(i=0; i<tamanho; i++){
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
              s[i]+=3;
            }
          }
          inverte(s, s_inv, tamanho);
          for(i=(tamanho/2); i<tamanho; i++){
            s_inv[i]-=1;
          }
          printf("%s\n", s_inv);
          for(i=0; i<tamanho; i++){
            s_inv[i]='\0';
          }
      }
  }
