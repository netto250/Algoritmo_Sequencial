#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 int cavalos, ferraduras;

 cout<< "Digite a quantidade de cavalos que um haras possui: ";
 cin>> cavalos;

 ferraduras = cavalos * 4;

 cout<< "O numero de ferraduras necessárias para equipar todos os cavalos são: " <<ferraduras;

    return 0;
}