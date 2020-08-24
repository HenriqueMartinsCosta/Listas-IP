#include <stdio.h>
#include <string.h>

 int main(){
     int n, i, i1, tamanho, a=3, b=3;
     char um[4]="one", dois[4]="two", tres[6]="three", numero[6];
     scanf("%d", &n);
     getchar();
         for(i=0; i<n; i++){
             scanf("%[^\n]", &numero);
             getchar();
             tamanho=strlen(numero);
                 if (tamanho==5){
                     printf("3\n");
                 }
                 else if (tamanho==3){
                     for (i1=0; i1<3; i1++){
                         if (numero[i1]==um[i1]){
                             a--;
                         }
                         if (numero[i1]==dois[i1]){
                             b--;
                         }
                     }
                     if (a<=1){
                         printf("1\n");
                     }
                     else if (b<=1){
                         printf("2\n");
                     }
                 }
                 a=3; b=3;
         }
 }
