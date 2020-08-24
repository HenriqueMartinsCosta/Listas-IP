#include <stdio.h>

  int main(){
    int i, j, mat[9][9], soma=0, zona_i, zona_j, valido=1;
      for(i=0; i<9; i++){
        for(j=0; j<9; j++){
          scanf("%d", &mat[i][j]);
        }
      }
      //Linha
      for(i=0; i<9; i++){
        for(j=0; j<9; j++){
          soma+=mat[i][j];
        }
        if(soma==45){
          soma=0;
        }
        else{
          valido=0;
          soma=0;
          break;
        }
      }
      //Coluna
      for(j=0; j<9; j++){
        for(i=0; i<9; i++){
          soma+=mat[i][j];
        }
        if(soma==45){
          soma=0;
        }
        else{
          valido=0;
          soma=0;
          break;
        }
      }
      //Zona
      for(zona_i=0; zona_i<3; zona_i++){
        for(zona_j=0; zona_j<3; zona_j++){
          for(i=(zona_i*3); i<(zona_i*3 + 3); i++){
            for(j=(zona_j*3); j<(zona_j*3 + 3); j++){
              soma+=mat[i][j];
            }
          }
          if(soma==45){
            soma=0;
          }
          else{
            valido=0;
            soma=0;
            break;
          }
        }
      }
      if(valido){
        printf("valido\n");
      }
      else{
        printf("invalido\n");
      }
  }
