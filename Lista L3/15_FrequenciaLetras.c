#include <stdio.h>
#include <string.h>

void ordem_crescente(int* vet, int n){
  int i, i1, menor, indmenor, aux;
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

  int main(){
    int testes, testes2, cont, cont1, tamanho, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, todos[25];
    char string[200], maiores[27];
    scanf("%d", &testes);
    testes2=testes;
    getchar();
      for(cont=0; cont<testes2; cont++){
        scanf("%[^\n]", string);
        getchar();
        tamanho=strlen(string);
        a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=0;i=0;j=0;k=0;l=0;m=0;n=0;o=0;p=0;q=0;r=0;s=0;t=0;u=0;v=0;w=0;x=0;y=0;z=0;
          for(cont1=0; cont1<tamanho; cont1++){
            if(string[cont1]=='A' || string[cont1]=='a'){
              a++;
            }
            if(string[cont1]=='B' || string[cont1]=='b'){
              b++;
            }
            if(string[cont1]=='C' || string[cont1]=='c'){
              c++;
            }
            if(string[cont1]=='D' || string[cont1]=='d'){
              d++;
            }
            if(string[cont1]=='E' || string[cont1]=='e'){
              e++;
            }
            if(string[cont1]=='F' || string[cont1]=='f'){
              f++;
            }
            if(string[cont1]=='G' || string[cont1]=='g'){
              g++;
            }
            if(string[cont1]=='H' || string[cont1]=='h'){
              h++;
            }
            if(string[cont1]=='I' || string[cont1]=='i'){
              i++;
            }
            if(string[cont1]=='J' || string[cont1]=='j'){
              j++;
            }
            if(string[cont1]=='K' || string[cont1]=='k'){
              k++;
            }
            if(string[cont1]=='L' || string[cont1]=='l'){
              l++;
            }
            if(string[cont1]=='M' || string[cont1]=='m'){
              m++;
            }
            if(string[cont1]=='N' || string[cont1]=='n'){
              n++;
            }
            if(string[cont1]=='O' || string[cont1]=='o'){
              o++;
            }
            if(string[cont1]=='P' || string[cont1]=='p'){
              p++;
            }
            if(string[cont1]=='Q' || string[cont1]=='q'){
              q++;
            }
            if(string[cont1]=='R' || string[cont1]=='r'){
              r++;
            }
            if(string[cont1]=='S' || string[cont1]=='s'){
              s++;
            }
            if(string[cont1]=='T' || string[cont1]=='t'){
              t++;
            }
            if(string[cont1]=='U' || string[cont1]=='u'){
              u++;
            }
            if(string[cont1]=='V' || string[cont1]=='v'){
              v++;
            }
            if(string[cont1]=='W' || string[cont1]=='w'){
              w++;
            }
            if(string[cont1]=='X' || string[cont1]=='x'){
              x++;
            }
            if(string[cont1]=='Y' || string[cont1]=='y'){
              y++;
            }
            if(string[cont1]=='Z' || string[cont1]=='z'){
              z++;
            }
          }
          todos[0]=a;
          todos[1]=b;
          todos[2]=c;
          todos[3]=d;
          todos[4]=e;
          todos[5]=f;
          todos[6]=g;
          todos[7]=h;
          todos[8]=i;
          todos[9]=j;
          todos[10]=k;
          todos[11]=l;
          todos[12]=m;
          todos[13]=n;
          todos[14]=o;
          todos[15]=p;
          todos[16]=q;
          todos[17]=r;
          todos[18]=s;
          todos[19]=t;
          todos[20]=u;
          todos[21]=v;
          todos[22]=w;
          todos[23]=x;
          todos[24]=y;
          todos[25]=z;
            ordem_crescente(todos, 26);
              for(cont1=0; cont1<26; cont1++){
                if(todos[cont1]==todos[25]){
                  if(todos[cont1]==a){
                    printf("a");
                    a++;
                  }
                  if(todos[cont1]==b){
                    printf("b");
                    b++;
                  }
                  if(todos[cont1]==c){
                    printf("c");
                    c++;
                  }
                  if(todos[cont1]==d){
                    printf("d");
                    d++;
                  }
                  if(todos[cont1]==e){
                    printf("e");
                    e++;
                  }
                  if(todos[cont1]==f){
                    printf("f");
                    f++;
                  }
                  if(todos[cont1]==g){
                    printf("g");
                    g++;
                  }
                  if(todos[cont1]==h){
                    printf("h");
                    h++;
                  }
                  if(todos[cont1]==i){
                    printf("i");
                    i++;
                  }
                  if(todos[cont1]==j){
                    printf("j");
                    j++;
                  }
                  if(todos[cont1]==k){
                    printf("k");
                    k++;
                  }
                  if(todos[cont1]==l){
                    printf("l");
                    l++;
                  }
                  if(todos[cont1]==m){
                    printf("m");
                    m++;
                  }
                  if(todos[cont1]==n){
                    printf("n");
                    n++;
                  }
                  if(todos[cont1]==o){
                    printf("o");
                    o++;
                  }
                  if(todos[cont1]==p){
                    printf("p");
                    p++;
                  }
                  if(todos[cont1]==q){
                    printf("q");
                    q++;
                  }
                  if(todos[cont1]==r){
                    printf("r");
                    r++;
                  }
                  if(todos[cont1]==s){
                    printf("s");
                    s++;
                  }
                  if(todos[cont1]==t){
                    printf("t");
                    t++;
                  }
                  if(todos[cont1]==u){
                    printf("u");
                    u++;
                  }
                  if(todos[cont1]==v){
                    printf("v");
                    v++;
                  }
                  if(todos[cont1]==w){
                    printf("w");
                    w++;
                  }
                  if(todos[cont1]==x){
                    printf("x");
                    x++;
                  }
                  if(todos[cont1]==y){
                    printf("y");
                    y++;
                  }
                  if(todos[cont1]==z){
                    printf("z");
                    z++;
                  }
                }
              }
              printf("\n");
      }
  }
