#include <stdio.h>
#include <stdlib.h>

int fibo(int A);

int main(){
    int a,b;
    printf("Digite o numero que deseja saber seu Teorema de Fibonate : ");
    scanf("%d",&a);
    b = fibo(a);
    printf("O Resultado e : %d\n",b);
    return 0;
}

int fibo(int A){
    if((A==0)||(A==1)){
        return A;
    }
    else{
        return fibo(A-1) + fibo(A-2);
    }
}