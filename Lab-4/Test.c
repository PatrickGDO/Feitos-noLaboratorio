#include <stdio.h>
#include <stdlib.h>

long long int fat(long long int n);

int main(){
long long int a,b;
printf("Digite um numero que deseja saber seu fatorial : ");
scanf("%lld",&a);
b = fat(a);
printf("O Fatorial de %lld eh : %lld ",a,b);
return 0;
}

long long int fat(long long int n){
if(n==1){
    return 1;
}
else{
    return n * fat(n-1);
}
}