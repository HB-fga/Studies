#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){

  fstream arquivo;
  string palavra;
  string linha;
  int c=0;

  cout << "inserindo um produto: ";
  cin>>palavra;

  palavra = palavra + ".txt";

  arquivo.open(palavra, fstream::in|fstream::ate);

  while(getline(arquivo,linha))
  {
    c++;
  }

  if(c == 0)
  {
    cout<<"esta vazio\n";
  }
  else
  {
    cout<<"nao esta vazio\n";
  }
  

  return 0;
}
