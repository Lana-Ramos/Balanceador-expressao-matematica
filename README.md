# Balanceador-expressao-matemtatica
Aqui está um modelo de **README** para o projeto de verificação de expressões matemáticas balanceadas, seguindo o mesmo estilo do exemplo que você forneceu:

---

# Verificador de Expressões Balanceadas

## Descrição

Este repositório contém um programa desenvolvido para a disciplina de Estrutura de Dados. O objetivo é utilizar a estrutura de dados **pilha (stack)** para verificar se uma expressão matemática está balanceada em relação ao uso de parênteses `()`, colchetes `[]` e chaves `{}`. O programa lê uma expressão fornecida pelo usuário e verifica se:

1. Para cada abertura de parêntese `(`, há um fechamento correspondente `)`.
2. Para cada abertura de colchete `[`, há um fechamento correspondente `]`.
3. Para cada abertura de chave `{`, há um fechamento correspondente `}`.
4. A ordem dos fechamentos está correta (por exemplo, `([)]` não é balanceado).

## Funcionalidades

- **Leitura de expressões**:
  - O programa solicita ao usuário que insira uma expressão matemática.
  
- **Verificação de balanceamento**:
  - O programa verifica se a expressão está balanceada em relação ao uso de parênteses, colchetes e chaves.
  - Exibe no terminal se a expressão está **balanceada** ou **não balanceada**.

## Exemplos

### Expressões Balanceadas:
- `{[()()]}`
- `{([]{})}`
- `((a + b) * (c - d))`

### Expressões Não Balanceadas:
- `{[()]` (falta um `}`)
- `{[(])}` (ordem incorreta)
- `((a + b]` (uso misto de `[` e `)`)

---

## Configuração do Ambiente de Desenvolvimento

### Instalação

Antes de iniciar o programa, você vai precisar instalar as seguintes ferramentas na sua máquina:

- **Visual Studio Code**: [Download do VSCode](https://code.visualstudio.com/download)
- **Compilador para C/C++**

### Dentro do VSCode

- Extensões: 
  - C/C++

---

## Clonagem do Repositório

Para clonar este repositório, você deve ter o Git instalado e, em seguida, usar o comando abaixo no terminal do VSCode:

```bash
$ git clone https://github.com/seu-usuario/Balanceador-expressao-matematica.git
```

Acesse a pasta do projeto:

```bash
$ cd Balanceador-expressao-matematica
```

---

## Compile & Run

Compile o projeto no ambiente do VSCode ou no seu ambiente de preferência. Use o seguinte comando para compilar e executar:

```bash
$ g++ main.cpp -o Balanceador-expressao-matematica
$ ./Balanceador-expressao-matematica
```

---

## Como Usar

1. Execute o programa.
2. Insira a expressão matemática que deseja verificar.
3. O programa exibirá no terminal se a expressão está **balanceada** ou **não balanceada**.

---

### Detalhes Técnicos

- **Pilha (Stack)**: Programa realizado para o estudo da estrutura Pilha em Estrutura de Dados
  - A pilha é usada para armazenar os caracteres de abertura (`(`, `[`, `{`).
  - Quando um caractere de fechamento é encontrado (`)`, `]`, `}`), o programa verifica se ele corresponde ao último caractere de abertura armazenado na pilha.
  - Se a pilha estiver vazia ao final da expressão e todos os fechamentos corresponderem às aberturas, a expressão está balanceada.

---

## Status do Projeto

**Em andamento**

---

## Autores

- [Lana Ramos](https://github.com/Lana-Ramos)
- [Pedro Gabriel Ferraz S. Silva](https://github.com/PGFerraz)
- [Vinicius de Jesus](https://github.com/vinijml)

---

## Licença

MIT License
