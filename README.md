# Listas de Programação e Algoritmos

Este repositório organiza as listas de exercícios da disciplina **Programação e Algoritmos**. As soluções e os códigos de apoio estão implementados em linguagem C. O objetivo é facilitar o estudo, a prática e o acompanhamento das atividades da disciplina.

## Trabalho final da disciplina

Participei em equipe do trabalho final de Programação e Algoritmos, disponível em: [Trabalho-Final-PA](https://github.com/Weberttz/Trabalho-Final-PA.git). O projeto recebeu nota máxima na avaliação.

## Possíveis erros

Podem haver erros, pois respondi à lista enquanto estava cursando o primeiro semestre de Ciência da Computação na UECE.

## Estrutura do repositório

Cada lista está em uma pasta numerada. Dentro de cada lista existem subpastas `Questão-XX` contendo o código-fonte (`main.c`) e, em alguns casos, um executável chamado `main`.

- `01. Lista - Algoritmos/` — Lista 1: conceitos básicos e algoritmos
- `02. Lista - Vetores e Matrizes/` — Lista 2: vetores e matrizes
- `03. Lista - Funções/` — Lista 3: funções e modularização
- `04. Lista - Ponteiros/` — Lista 4: ponteiros e manipulação de memória
- `05. Lista - Arquivos/` — Lista 5: operações com arquivos

> Observação: Alguns diretórios podem conter um arquivo executável precompilado chamado `main`. Esses binários foram incluídos para facilitar testes rápidos; se preferir, remova-os e compile os fontes localmente.

## Como compilar e executar

1. Clone o repositório:

```bash
git clone https://github.com/faelse/Lista-Programacao-e-Algoritmos.git
cd Lista-Programacao-e-Algoritmos
```

2. Entre na pasta da questão desejada, compile e execute (exemplo):

```bash
cd "01. Lista - Algoritmos"/Questão-01
gcc main.c -o main       # compilar
./main                  # executar
```

Se o arquivo já contiver um executável `main`, você pode executá-lo com `./main`.

## Sobre a disciplina

A disciplina trabalha raciocínio lógico e técnicas básicas de programação estruturada. As listas presentes cobrem temas como:

- Estruturas condicionais e de repetição
- Vetores e matrizes
- Funções e modularização
- Ponteiros e manipulação de memória
- Leitura/escrita de arquivos
