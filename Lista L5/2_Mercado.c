#include <stdio.h>
#include <string.h>

typedef struct mercado{
  char produto[51];
  double preco;
} mercadoria;

  int main(){
    int n, m, p, i, i1, tamanho=0, a;
    char prod[51];
    double qtd, total;
    scanf("%d", &n);
      for(n; n>0; n--){
        scanf("%d", &m);
        mercadoria merc[m];
          for(i=0; i<m; i++){
            scanf("%s %lf", &merc[i].produto, &merc[i].preco);
          }
          scanf("%d", &p);
            for(i=0; i<p; i++){
              a=0;
              scanf("%s %lf", &prod, &qtd);
              tamanho=strlen(prod);
                for(i1=0; i1<m; i1++){
                  if(strcmp(merc[i1].produto, prod)==0){
                    total+=(merc[i1].preco)*qtd;
                  }
                }
            }
            printf("R$ %.2lf\n", total);
            total=0;
      }
  }
