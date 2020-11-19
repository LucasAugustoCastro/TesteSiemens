#include <iostream>
using namespace std;

int pesquisa_linear(int vetInt[], int length, int number){
  for(int i = 1; i < length; i++){
    if(vetInt[i-1] == number){
      return i;
    }
  }
  return -1;
};


int main(){
  int vetInt[] = {1,2,3,4,5,6};
  int length = sizeof(vetInt)/sizeof(int);
  int number[] = {5,8};
  for(int i =0; i < 2; i++){
      
    int index = pesquisa_linear(vetInt, length, number[i]);
    cout<< "Vetor de teste: [1,2,3,4,5,6]"<< endl;
    cout << "Elemento procurado: " << number[i] << endl;
    cout << "Tamanho do array: "<< length << endl;
    cout << "Index encontrado: "<< index << endl<< endl;
  }




  return 0;
}