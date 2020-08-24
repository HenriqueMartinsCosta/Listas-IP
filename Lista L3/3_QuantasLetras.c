#include <stdio.h>
#include <string.h>

  int main(){
    int q, tamanho, i, i1, letras, vogais, consoantes;
    char l[10000];
    scanf("%d", &q);
    getchar();
      for(i=0; i<q; i++){
        scanf("%[^\n]", &l);
        getchar();
        tamanho=strlen(l);
        letras=0; vogais=0; consoantes=0;
          for(i1=0; i1<tamanho; i1++){
            if(l[i1]>=65 && l[i1]<=90){
              letras++;
                if(l[i1]==65 || l[i1]==69 || l[i1]==73 || l[i1]==79 || l[i1]==85){
                  vogais++;
                }
            }
            if(l[i1]>=97 && l[i1]<=122){
              letras++;
                if(l[i1]==97 || l[i1]==101 || l[i1]==105 || l[i1]==111 || l[i1]==117){
                  vogais++;
                }
            }
            consoantes=letras-vogais;
          }
          printf("Letras = %d\n", letras);
          printf("Vogais = %d\n", vogais);
          printf("Consoantes = %d\n", consoantes);
      }
  }
