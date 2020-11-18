#include <iostream>
using namespace std;

double Fibonacci_(int n, double anterior, double atual){
  if(n==1){
    return atual;
  }
  return Fibonacci_(n-1, atual, anterior+atual);
};
double Fibonacci(int n){
  return Fibonacci_(n, 0, 1);
};
int main(){
  int n;
  cout << "Qual o termo da serio de Fibonacci deseja ver: ";
  cin >> n;
  cout << Fibonacci(n)<< endl;

  return 0;
}