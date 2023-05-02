#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20];
    int i,b,cont,d;
    printf("Digite uma String : ");
    fgets(str,20,stdin);
    b=strlen(str);
    d=b-1;
    for(cont=0,i=0;i<d;i++,d--){
        if(str[i]==str[b]){
            cont=cont + 2;
        }
    }
    if(cont!=1){
        printf("E um palindromo");
    }
    else{
        printf("Nao eh um palindromo");
    }
    return 0;
}