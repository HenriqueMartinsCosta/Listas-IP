#include <stdio.h>
#include <string.h>
int main(){
	unsigned int n,i,b,e,j,aux;
	char string[100000];
	scanf("%u",&n);
	for(i=0;i<n;i++){
		scanf("%u %u",&b,&e);
		for(j=b;j<=e;j++){
			sprintf(string+strlen(string),"%u",j);
		}
		aux=strlen(string);
		for(j=0;j<aux;aux--){
			sprintf(string+strlen(string),"%c",*(string+aux-1));
		}
		printf("%s\n",string);
		memset(string,0,strlen(string));
	}
}
