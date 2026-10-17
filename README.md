# Calculadora IMC

Projeto educacional para a disciplina de Algoritmos e Pensamento Computacional.

## O que é

Aplicação em C que calcula o Índice de Massa Corporal (IMC) de uma pessoa com base no peso e altura informados, e classifica o resultado conforme os critérios da OMS.

## Características

- Menu interativo com 3 opções: calcular IMC, ler sobre o IMC ou sair.
- Validação de entrada: aceita apenas valores numéricos positivos.
- Cálculo do IMC: `peso / (altura²)`.
- Classificação automática em 6 categorias (Abaixo do peso, Peso normal, Sobrepeso, Obesidade Grau I, II e III).
- Explicação textual sobre o que é o IMC e suas limitações.

## Como executar

```bash
gcc calculadora_imc.c -o calculadora_imc
./calculadora_imc
```
