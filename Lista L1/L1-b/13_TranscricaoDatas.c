#include <stdio.h>

  int main(){
    int dia, mes, ano, data;
    scanf("%d", &data);
     dia=data/1000000;
     mes=(data/10000)%100;
     ano=(data%10000);
    if(dia>31 || mes>12){
      printf("Data invalida!\n");
    }
    else{
      if(mes==1){
        printf("%d de janeiro de %d\n", dia, ano);
      }
      if(mes==2){
        if(dia>28){
          printf("Data invalida!\n");
        }
        else{
          printf("%d de fevereiro de %d\n", dia, ano);
        }
      }
      if(mes==3){
        printf("%d de marco de %d\n", dia, ano);
      }
      if(mes==4){
        if(dia>30){
          printf("Data invalida!\n");
        }
        else{
          printf("%d de abril de %d\n", dia, ano);
        }
      }
      if(mes==5){
        printf("%d de maio de %d\n", dia, ano);
      }
      if(mes==6){
        if(dia>30){
          printf("Data invalida!\n");
        }
        else{
          printf("%d de junho de %d\n", dia, ano);
        }
      }
      if(mes==7){
        printf("%d de julho de %d\n", dia, ano);
      }
      if(mes==8){
        printf("%d de agosto de %d\n", dia, ano);
      }
      if(mes==9){
        if(dia>30){
          printf("Data invalida!\n");
        }
        else{
          printf("%d de setembro de %d\n", dia, ano);
        }
      }
      if(mes==10){
        printf("%d de outubro de %d\n", dia, ano);
      }
      if(mes==11){
        if(dia>30){
          printf("Data invalida!\n");
        }
        else{
          printf("%d de novembro de %d\n", dia, ano);
        }
      }
      if(mes==12){
        printf("%d de dezembro de %d\n", dia, ano);
      }
    }
  }
