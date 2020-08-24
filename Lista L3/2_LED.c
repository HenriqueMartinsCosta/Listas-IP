/*
1=2
2=5
3=5
4=4
5=5
6=6
7=3
8=7
9=6
0=6
*/
#include <stdio.h>
#include <string.h>

  int main(){
    int q, tamanho, leds, i, i1, a;
    char n[100000];
    scanf("%d", &q);
      for(i=0; i<q; i++){
        scanf("%s", &n);
        getchar();
        leds=0;
        tamanho=strlen(n);
          for(i1=0; i1<tamanho; i1++){
            if(n[i1]=='1'){
              leds+=2;
            }
            else if(n[i1]=='7'){
              leds+=3;
            }
            else if(n[i1]=='4'){
              leds+=4;
            }
            else if(n[i1]=='2' || n[i1]=='3' || n[i1]=='5'){
              leds+=5;
            }
            else if(n[i1]=='6' || n[i1]=='9' || n[i1]=='0'){
              leds+=6;
            }
            else if(n[i1]=='8'){
              leds+=7;
            }
          }
        printf("%d leds\n", leds);
      }
  }
