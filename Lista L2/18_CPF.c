#include <stdio.h>

  int main(){
    int n, i, i1, cpf[11], b1, b2;
    scanf("%d", &n);
      for(i=1; i<=n; i++){
        for(i1=0; i1<11; i1++){
          scanf("%d", &cpf[i1]);
        }
        b1=(cpf[0]+cpf[1]*2+cpf[2]*3+cpf[3]*4+cpf[4]*5+cpf[5]*6+cpf[6]*7+cpf[7]*8+cpf[8]*9)%11;
        b2=(cpf[0]*9+cpf[1]*8+cpf[2]*7+cpf[3]*6+cpf[4]*5+cpf[5]*4+cpf[6]*3+cpf[7]*2+cpf[8])%11;
        if(b1==10){
          b1=0;
        }
        if(b2==10){
          b2=0;
        }
        if(b1==cpf[9] && b2==cpf[10]){
          printf("CPF valido\n");
        }
        else{
          printf("CPF invalido\n");
        }
      }
  }
