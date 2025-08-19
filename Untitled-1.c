/*Aula de algoritmos 18/08/2025, Universidade Católica de Brasília*/
#include <stdio.h>

int main(){
    //definição de valores
    int idade;
    int altura;
    int peso;
    int soma;

    printf("Digite a sua idade:");
    scanf("%d",&idade);

    printf("Digite a sua altura:");
    scanf("%d",&altura);
    
    printf("Digite o seu peso:");
    scanf("%d",&peso);

    soma = idade + altura + peso;    
   
    printf("Sua idade, sua altura e seu peso sao: %d\n", idade + altura + peso);
    return 0;
}