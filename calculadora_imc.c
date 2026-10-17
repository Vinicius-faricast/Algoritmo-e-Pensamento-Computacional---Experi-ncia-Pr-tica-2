#include <stdio.h>
#include <stdlib.h>

float calculadoraIMC(float altura, float peso){
    float imc;
    imc = peso/(altura*altura);
    return imc;
}

char* sobreIMC(){
    char* sobreIMC;
    sobreIMC = "O que e o IMC?\n O Indice de Massa Corporal (IMC) e uma metrica internacional adotada pela Organizacao Mundial da Saude (OMS) para avaliar se uma pessoa esta dentro do peso considerado ideal para a sua altura. Ele e calculado dividindo o peso (em quilogramas) pela altura elevada ao quadrado (em metros).\n Embora seja uma ferramenta rapida e util para detectar padroes de sobrepeso e obesidade na populacao geral, o IMC nao mede diretamente a gordura corporal. Por isso, ele pode nao ser exato para atletas (que possuem muita massa muscular) e idosos.\n";

    return sobreIMC;
}

char* classificacaoIMC(float imc){
    char* classificacao;
    if (imc < 18.5){
        classificacao = "Abaixo do peso";
    }
    else if (imc >= 18.5 && imc <= 24.9){
        classificacao = "Peso normal";
    }
    else if (imc >= 25.0 && imc <= 29.9){
        classificacao = "Sobrepeso";
    }
    else if (imc >= 30.0 && imc <= 34.9){
        classificacao = "Obesidade Grau I";
    }
    else if (imc >= 35.0 && imc <= 39.9){
        classificacao = "Obesidade Grau II";
    }
    else{
        classificacao = "Obesidade Grau III";
    }
    return classificacao;
}

int main(){
    printf("Calculadora IMC\n");
    printf("===============\n");
    printf("Aqui esta sua calculadora IMC. Aqui voce pode calcular e saber se voce esta com o peso ideal.\n");
    float altura, peso, imc;
    int opcao;

    while (opcao != 0)
    {
        printf("escolha uma opcao: 0 - Sair, 1 - Calcular IMC, 2 - sobre o IMC\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 0:
                printf("Saindo...\n Obrigado pela escolha\n");
                break;
            case 1:
                printf("Para calcular seu IMC digite sua altura e peso\n");
                printf("Digite sua altura(use . para casas decimais, ex: 1.70): ");
                scanf("%f", &altura);
                printf("Digite seu peso(use . para casas decimais, ex: 70.5): ");
                scanf("%f", &peso);
                imc =calculadoraIMC(altura, peso);
                printf("Seu IMC: %.2f\n", imc);
                printf("Classificacao:\n %s\n", classificacaoIMC(imc));
                break;
            case 2:
                printf("%s", sobreIMC());
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    }
    
    return 0;
}