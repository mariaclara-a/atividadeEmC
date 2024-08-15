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
   questao2 
 #include <stdio.h>
int main()
{
        double largura, comprimento, valor, area, preco;
        
        printf("Digite a largura do terreno: ");
        scanf("%lf", &largura);
        
        printf("Digite o comprimento do terreno: ");
        scanf("lf", &comprimento);
        
        printf("Digite o valor de motro quadrado: ");
        scanf("%lf", &valor);
        
        area = largura * comprimento;
        
        printf("Area do terreno = %2lf\n", area);
        
        preco = area * valor;
        
        printf("preco do terreno + %.2lf\n", preco);
         
    return 0;
}