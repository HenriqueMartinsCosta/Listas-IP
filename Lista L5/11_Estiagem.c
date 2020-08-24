#include <stdio.h>

void ordem_crescente(double* vet, int n){
  int i, i1, indmenor;
  double menor, aux;
    for(i=0; i<(n-1); i++){
      menor=vet[i];
      indmenor=i;
      for(i1=(i+1); i1<n; i1++){
        if(vet[i1]<menor){
          menor=vet[i1];
          indmenor=i1;
        }
      }
      aux=vet[i];
      vet[i]=vet[indmenor];
      vet[indmenor]=aux;
    }
}

typedef struct imoveis{
  int moradores;
  int consumo;
  double consumo_por_morador;
} imoveis;

  int main(){
    int n, i, j, cidade=1, soma_moradores=0;
    double total=0, moradores=0, consumo_medio;
    scanf("%d", &n);
      while(n){
        double ordem[n];
        imoveis imovel[n];
          for(i=0; i<n; i++){
            scanf("%d %d", &imovel[i].moradores, &imovel[i].consumo);
            total+=(double)imovel[i].consumo;
            moradores+=(double)imovel[i].moradores;
            imovel[i].consumo_por_morador=(double)imovel[i].consumo/(double)imovel[i].moradores;
            ordem[i]=imovel[i].consumo_por_morador;
          }
          printf("Cidade# %d:\n", cidade);
          ordem_crescente(ordem, n);
          for(i=0; i<n; i++){
            for(j=0; j<n; j++){
              if(imovel[j].consumo_por_morador==ordem[i]){
                imovel[j].moradores+=soma_moradores;
                soma_moradores=0;
                if((int)imovel[j].consumo_por_morador==(int)ordem[(i+1)]){
                  soma_moradores+=imovel[j].moradores;
                }
              }
            }
          }
          for(i=0; i<n; i++){
            for(j=0; j<n; j++){
              if(imovel[j].consumo_por_morador==ordem[i]){
                if((int)imovel[j].consumo_por_morador==(int)ordem[(i+1)]){
                  break;
                }
                else{
                  printf("%d-%d", imovel[j].moradores, (int)imovel[j].consumo_por_morador);
                  if(i==(n-1)){
                    printf("\n");
                  }
                  else{
                    printf(" ");
                  }
                }
              }
            }
          }
          consumo_medio=total/moradores;
          printf("Consumo medio: %.2lf m3.\n", consumo_medio);
          total=0; moradores=0; cidade++;
          scanf("%d", &n);
      }
  }
