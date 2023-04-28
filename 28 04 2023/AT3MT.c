#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[4][4],i,j,k,u,cont;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero : ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",a[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                for(u=0,cont=0;u<4;u++){
                    if(a[i][j]>a[k][u]){
                        cont++;
                    }
                    if(cont==15){
                        printf("O Maior Numero esta localizado no vetro [%d][%d]",i,j);
                    }
                }
            }
        }
    }
    return 0;
    }