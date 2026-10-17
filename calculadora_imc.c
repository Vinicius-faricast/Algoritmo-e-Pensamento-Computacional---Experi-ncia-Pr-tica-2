#include <stdio.h>
#include <stdlib.h>

float calculadoraIMC(float altura, float peso){
    float imc;
    imc = peso/(altura*altura);
    return imc;
}

int main(){
    printf("Calculadora IMC\n");
    printf("===============\n");
    printf("Para calcular o IMC digite sua altura e peso\n");
    float altura, peso, imc;
    
    printf("Digite sua altura(use . para casas decimais, ex: 1.70): ");
    scanf("%f", &altura);
    printf("Digite seu peso(use . para casas decimais, ex: 70.5): ");
    scanf("%f", &peso);
    imc =calculadoraIMC(altura, peso);
    printf("Seu IMC: %.2f\n", imc);
    return 0;
}