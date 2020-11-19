#include <iostream>
#include <string.h>
using namespace std;


int main(){
  string str;
  int sizeString = 0;
  cout << "Digite a string que queira calcular o tamanho: ";
  getline(cin, str);

  for(char letter : str){
    sizeString++;
  }
  cout<< "O tamanho da string digitada é: "<< sizeString << endl;

  return 0;
}