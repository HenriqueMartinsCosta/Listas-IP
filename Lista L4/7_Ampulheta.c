#include <stdio.h>

  int main(){
    int i, j, cont, soma, maior_soma=0, mat[6][6], *p=*mat;
      for(cont=0; cont<36; cont++){
        scanf("%d", &p[cont]);
      }
      for(j=1; j<=4; j++){
        for(i=1; i<=4; i++){
          soma=(mat[(i-1)][(j-1)])+(mat[(i-1)][j])+(mat[(i-1)][(j+1)])+(mat[i][j])+(mat[(i+1)][(j-1)])+(mat[(i+1)][j])+(mat[(i+1)][(j+1)]);
            if(soma>=maior_soma){
              maior_soma=soma;
            }
        }
      }
      printf("%d\n", maior_soma);
  }
