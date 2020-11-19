#include <iostream>
#include <string.h>
using namespace std;


int main(){
  
  string str;
  cout<< "Digite a string que queira inverter: ";
  getline(cin, str);
  int sizeOfString = str.size() - 1;

  for(int i = 0; i< (sizeOfString+1)/2; i++){

    char letter = str[i];
    str[i] = str[sizeOfString - i];
    str[sizeOfString - i] = letter;
  }
  cout << "Resultado da inversão: " << str << endl;

  


  return 0;
}