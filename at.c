#include <stdio.h>
#include<stdlib.h>
int main(){
    int d;
    printf("digite a nota: ");
    scanf("%d",&d);
    if (d >= 60)
        printf("aluno aprovado \n");
    else
       if(d < 30)
         printf("aluno reprovado \n");
       else
         printf("o aluno deve fazer a prova sub \n");
         
    return 0;
}