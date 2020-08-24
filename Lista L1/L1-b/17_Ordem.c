#include <stdio.h>

  int main(){
    int n1, n2, n3;
    char c1, c2, c3;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c %c %c", &c1, &c2, &c3);
      if(c1=='A'){
        if(c2=='B'){
          if(n1>=n2){
            if(n2>=n3){ //n1>n2>n3
              printf("%d %d %d\n", n3, n2, n1);
            }
            else{
              if(n1>=n3){ //n1>n3>n2
                printf("%d %d %d\n", n2, n3, n1);
              }
              else{ //n3>n1>n2
                printf("%d, %d, %d\n", n2, n1, n3);
              }
            }
          }
          else{ //n2>n1
            if(n2>=n3){
              if(n1>=n3){ //n2>n1>n3
                printf("%d %d %d\n", n3, n1, n2);
              }
              else{ //n2>n3>n1
                printf("%d %d %d\n", n1, n3, n2);
              }
            }
            else{ //n3>n2>n1
              printf("%d %d %d\n", n1, n2, n3);
            }
          }
        }
        else{
          if(n1>=n2){
            if(n2>=n3){ //n1>n2>n3
              printf("%d %d %d\n", n3, n1, n2);
            }
            else{
              if(n1>=n3){ //n1>n3>n2
                printf("%d %d %d\n", n2, n1, n3);
              }
              else{ //n3>n1>n2
                printf("%d, %d, %d\n", n2, n3, n1);
              }
            }
          }
          else{ //n2>n1
            if(n2>=n3){
              if(n1>=n3){ //n2>n1>n3
                printf("%d %d %d\n", n3, n2, n1);
              }
              else{ //n2>n3>n1
                printf("%d %d %d\n", n1, n2, n3);
              }
            }
            else{ //n3>n2>n1
              printf("%d %d %d\n", n1, n3, n2);
            }
          }
      }
    }
      if(c1=='B'){
        if(c2=='A'){
          if(n1>=n2){
            if(n2>=n3){ //n1>n2>n3
              printf("%d %d %d\n", n2, n3, n1);
            }
            else{
              if(n1>=n3){ //n1>n3>n2
                printf("%d %d %d\n", n3, n2, n1);
              }
              else{ //n3>n1>n2
                printf("%d, %d, %d\n", n1, n2, n3);
              }
            }
          }
          else{ //n2>n1
            if(n2>=n3){
              if(n1>=n3){ //n2>n1>n3
                printf("%d %d %d\n", n1, n2, n3);
              }
              else{ //n2>n3>n1
                printf("%d %d %d\n", n3, n2, n1);
              }
            }
            else{ //n3>n2>n1
              printf("%d %d %d\n", n2, n3, n1);
            }
          }
      }
      if(c1=='C'){
        if(c2=='A'){
          printf("%d %d %d\n", n2, n3, n1);
        }
        else{
          printf("%d %d %d\n", n3, n2, n1);
        }
      }
  }
      if(c1=='C'){
        if(c2=='A'){
          if(n1>=n2){
            if(n2>=n3){ //n1>n2>n3
              printf("%d %d %d\n", n1, n3, n2);
            }
            else{
              if(n1>=n3){ //n1>n3>n2
                printf("%d %d %d\n", n1, n2, n3);
              }
              else{ //n3>n1>n2
                printf("%d, %d, %d\n", n3, n2, n1);
              }
            }
          }
          else{ //n2>n1
            if(n2>=n3){
              if(n1>=n3){ //n2>n1>n3
                printf("%d %d %d\n", n2, n1, n3);
              }
              else{ //n2>n3>n1
                printf("%d %d %d\n", n2, n3, n1);
              }
            }
            else{ //n3>n2>n1
              printf("%d %d %d\n", n3, n2, n1);
            }
          }
        }
      }
  }
