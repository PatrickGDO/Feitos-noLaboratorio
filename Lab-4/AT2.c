#include <stdio.h>
#include <stdlib.h>

int Data_mes(int A);

int main(){
    int a,b,c,Mes;
    printf("Digite Data :  Dia,Mes e Ano ");
    scanf("%d %d %d",&a,&b,&c);
    Dia = Data_dia(a);
    Mes = Data_mes(b);
    Ano = Data_ano(c);
    printf("");
    return 0;
}


int Data_mes(int A){
    switch (A)
    {
        case 1: printf("Janeior de");break;
        case 2: printf("Fevereiro de");break;
        case 3: printf("Marco de");break;
        case 4: printf("abril de");break;
        case 5: printf("Maio de");break;
        case 6: printf("Junho de");break;
        case 7: printf("Julho de");break;
        case 8: printf("Agosto de");break;
        case 9: printf("Setembro de");break;
        case 10: printf("Outubro de");break;
        case 11: printf("Novembro de");break;
        case 12: printf("Dezembro de");break;
        default : printf("Mes invalido!!");
    }
    return A;
}