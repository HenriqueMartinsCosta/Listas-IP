#include <stdio.h>
#include <string.h>

typedef struct x {
  char pais[50], traducao[100];
} tradutor;
  int main(){
    char p[50];
    int i;
    tradutor trad[24];
      sprintf(trad[0].pais, "brasil"); sprintf(trad[0].traducao, "Feliz Natal!");
      sprintf(trad[1].pais, "alemanha"); sprintf(trad[1].traducao, "Frohliche Weihnachten!");
      sprintf(trad[2].pais, "austria"); sprintf(trad[2].traducao, "Frohe Weihnacht!");
      sprintf(trad[3].pais, "coreia"); sprintf(trad[3].traducao, "Chuk Sung Tan!");
      sprintf(trad[4].pais, "espanha"); sprintf(trad[4].traducao, "Feliz Navidad!");
      sprintf(trad[5].pais, "grecia"); sprintf(trad[5].traducao, "Kala Christougena!");
      sprintf(trad[6].pais, "estados-unidos"); sprintf(trad[6].traducao, "Merry Christmas!");
      sprintf(trad[7].pais, "inglaterra"); sprintf(trad[7].traducao, "Merry Christmas!");
      sprintf(trad[8].pais, "australia"); sprintf(trad[8].traducao, "Merry Christmas!");
      sprintf(trad[9].pais, "portugal"); sprintf(trad[9].traducao, "Feliz Natal!");
      sprintf(trad[10].pais, "suecia"); sprintf(trad[10].traducao, "God Jul!");
      sprintf(trad[11].pais, "turquia"); sprintf(trad[11].traducao, "Mutlu Noeller");
      sprintf(trad[12].pais, "argentina"); sprintf(trad[12].traducao, "Feliz Navidad!");
      sprintf(trad[13].pais, "chile"); sprintf(trad[13].traducao, "Feliz Navidad!");
      sprintf(trad[14].pais, "mexico"); sprintf(trad[14].traducao, "Feliz Navidad!");
      sprintf(trad[15].pais, "antardida"); sprintf(trad[15].traducao, "Merry Christmas!");
      sprintf(trad[16].pais, "canada"); sprintf(trad[16].traducao, "Merry Christmas!");
      sprintf(trad[17].pais, "irlanda"); sprintf(trad[17].traducao, "Nollaig Shona Dhuit!");
      sprintf(trad[18].pais, "belgica"); sprintf(trad[18].traducao, "Zalig Kerstfeest!");
      sprintf(trad[19].pais, "italia"); sprintf(trad[19].traducao, "Buon Natale!");
      sprintf(trad[20].pais, "libia"); sprintf(trad[20].traducao, "Buon Natale!");
      sprintf(trad[21].pais, "siria"); sprintf(trad[21].traducao, "Milad Mubarak!");
      sprintf(trad[22].pais, "marrocos"); sprintf(trad[22].traducao, "Milad Mubarak!");
      sprintf(trad[23].pais, "japao"); sprintf(trad[23].traducao, "Merii Kurisumasu!");
        while(scanf("%s", &p)!=EOF){
          for(i=0; i<=24; i++){
            if(strcmp(p, trad[i].pais)==0 && i!=24){
              printf("%s\n", trad[i].traducao);
              break;
            }
            if(i==24){
              printf("-- NOT FOUND --\n");
            }
          }
        }
  }
