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
    int tamanho, i, q;
    char s[200];
      while(scanf("%[^\n]", &s)!=EOF){
        getchar();
        tamanho=strlen(s);
        char s_inv[tamanho];
        inverte(s, s_inv, tamanho);
        q=0;
          for(i=0; i<tamanho; i++){
            if(s[i]==s_inv[i]){
              q++;
            }
          }
          if(q==tamanho){
            printf("sim\n");
          }
          else{
            printf("nao\n");
          }
      }
  }
