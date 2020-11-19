# Questão 9 do teste da Siemens
- Teste realizado no Ubuntu 20.04

## Como rodar
- Considerando que a você estaja em uma maquina linux ou em uma virtualização linux
- Primeiramente clone o repositorio, no seu terminal escreva:
  ``` 
  git clone https://github.com/LucasAugustoCastro/TesteSiemens.git
  ``` 
- Dentro da pasta na qual você acabou de clonar, entre na pasta Questao8 com o comando no seu terminal:

  ```
  cd Questao9
  ```
- Então rode o comando no seu terminal:
  ```
  ./questao9
  ```
- Caso queira compilar o projeto novamente digite o seguinte comando no terminal:
  ```
  g++ questao9.cpp -o questao9
  ``` 
## Dentro do programa
- Ao rodar o programa, ele ira mostrar o array que está sendo usado, o elemento procurado, o tamanho do array e o index, caso o elemento seja encontrado ira mostrar o index desse elemento no array e caso não seja irá mostrar -1