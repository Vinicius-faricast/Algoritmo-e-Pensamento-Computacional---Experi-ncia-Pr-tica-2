#include <stdio.h>
#include <stdlib.h>

float calculadoraIMC(float altura, float peso)
{
    float imc; // Calcula IMC = peso / (altura * altura)
    imc = peso / (altura * altura);
    return imc;
}

char *sobreIMC()
{
    // Retorna uma explicação sobre o que é o IMC
    char *sobreIMC;
    sobreIMC = "O que e o IMC?\n O Indice de Massa Corporal (IMC) e uma metrica internacional adotada pela Organizacao Mundial da Saude (OMS) para avaliar se uma pessoa esta dentro do peso considerado ideal para a sua altura. Ele e calculado dividindo o peso (em quilogramas) pela altura elevada ao quadrado (em metros).\n Embora seja uma ferramenta rapida e util para detectar padroes de sobrepeso e obesidade na populacao geral, o IMC nao mede diretamente a gordura corporal. Por isso, ele pode nao ser exato para atletas (que possuem muita massa muscular) e idosos.\n";

    return sobreIMC;
}

char *classificacaoIMC(float imc)
{
    // Classifica o IMC em categorias conforme a OMS
    char *classificacao;
    if (imc < 18.5)
    {
        classificacao = "Abaixo do peso";
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        classificacao = "Peso normal";
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        classificacao = "Sobrepeso";
    }
    else if (imc >= 30.0 && imc <= 34.9)
    {
        classificacao = "Obesidade Grau I";
    }
    else if (imc >= 35.0 && imc <= 39.9)
    {
        classificacao = "Obesidade Grau II";
    }
    else
    {
        classificacao = "Obesidade Grau III";
    }
    return classificacao;
}

int lerValorPositivo(const char *mensagem, float *valor)
{
    // Lê valor positivo com validação e limpeza de buffer
    while (1)
    {
        printf("%s", mensagem);

        if (scanf("%f", valor) != 1)
        {
            printf("Entrada invalida! Digite um numero.\n");

            // Limpa os caracteres restantes da entrada
            int caractere;
            while ((caractere = getchar()) != '\n' &&
                   caractere != EOF)
            {
            }

            continue;
        }

        if (*valor <= 0)
        {
            printf("O valor deve ser maior que zero.\n");
            continue;
        }

        return 1;
    }
}

int main()
{
    // Menu interativo da calculadora IMC
    printf("Calculadora IMC\n");
    printf("===============\n");
    printf("Aqui esta sua calculadora IMC. Aqui voce pode calcular e saber se voce esta com o peso ideal.\n");
    float altura, peso, imc;
    int opcao = -1;

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
            lerValorPositivo("Digite sua altura (ex: 1.70): ", &altura);
            lerValorPositivo("Digite seu peso (ex: 70.5): ", &peso);

            imc = calculadoraIMC(altura, peso);
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