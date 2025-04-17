# Shell Sort em C++

Este repositório contém a implementação do **Shell Sort** em C++, utilizando diferentes arquivos para testar a ordenação de listas de números com diferentes tamanhos de dados. O projeto inclui também uma medição de tempo de execução do algoritmo.
Desenvolvido como tarefa da matéria de Estrurtura de Dados - FATEC SCS.

## 📝 Arquivos

- **`list.txt`**: Base de dados com 100.000 números embaralhados para o algoritmo organizar.
- **`list1.txt`**: Base de dados com 50 números embaralhados para o algoritmo organizar.
- **`menu_shell.cpp`**: Código principal que realiza a leitura dos arquivos, aplica o algoritmo de Shell Sort e mede o tempo de execução.
- **`shellSort.cpp`**: Implementação do algoritmo Shell Sort utilizando a fórmula de Knuth para cálculo dos gaps.
- **`shellSortg.cpp`**: Outra implementação do algoritmo Shell Sort utilizando uma versão mais simples do cálculo dos gaps.

## 🛠️ Como executar

### Requisitos

- Compilador C++ (como `g++`)
- Arquivos `list.txt` e `list1.txt` devem estar no mesmo diretório do código.

### Passos

1. Clone este repositório:

   ```bash
   git clone https://github.com/IngridSR95/ShellSort.git
   ```

2. Acesse o diretório:

   ```bash
   cd ShellSort
   ```

3. Compile o código principal (`menu_shell.cpp`):

   ```bash
   g++ menu_shell.cpp -o menu_shell
   ```

4. Execute o programa:

   ```bash
   ./menu_shell
   ```

### Exemplo de Saída

O programa irá imprimir o vetor ordenado após a execução do Shell Sort e também o tempo gasto para ordenar a lista. A saída pode ser algo assim:

```
Vetor organizado por Shell Sort 
1 2 3 4 5 6 ... 99999 100000

Tempo de execução do Shell Sort: 0.35s
```

## 📊 Tempo de Execução

O tempo de execução do algoritmo é calculado usando a função `clock()` e é impresso no final da execução. Isso permite comparar a eficiência do algoritmo conforme o número de elementos na lista.

## 🤖 Algoritmo Shell Sort

O Shell Sort é uma melhoria do algoritmo de ordenação por inserção. Ele funciona comparando e trocando elementos que estão distantes uns dos outros, e vai progressivamente diminuindo a distância entre os elementos até que a lista esteja completamente ordenada.

Existem duas versões do Shell Sort no projeto:

- **`shellSort.cpp`**: Utiliza a fórmula de Knuth para o cálculo dos gaps.
- **`shellSortg.cpp`**: Utiliza um cálculo de gaps mais simples (metade do tamanho da lista e vai dividindo por 2).

## 📁 Estrutura do Projeto

- **`list.txt`**: Contém 100.000 números embaralhados.
- **`list1.txt`**: Contém 50 números embaralhados.
- **`menu_shell.cpp`**: Código principal que lê os dados, ordena e mede o tempo de execução.
- **`shellSort.cpp`**: Implementação do Shell Sort com gaps calculados pela fórmula de Knuth.
- **`shellSortg.cpp`**: Outra versão do algoritmo Shell Sort com gaps simples.

## 🧑‍💻 Contribuindo

Se você deseja contribuir para este projeto, basta fazer um fork do repositório e enviar um pull request com as suas modificações. Fique à vontade para aprimorar o código, adicionar mais funcionalidades ou melhorar a documentação!

---

Feito com 💟 por Ingrid Santana Rodrigues 

[![LinkedIn](https://img.shields.io/badge/-LinkedIn-000?style=for-the-badge&logo=linkedin&logoColor=ffffff&color=A084DC)](https://www.linkedin.com/in/ingrid-santana-rodrigues-149750273/)
