#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 
 float produto, valor_Imposto;

 cout<< "Digite o valor de um produto: ";
 cin>> produto;

 valor_Imposto = produto * 1.15;

 cout<< "O valor do produto com 15% de imposto é: "<<valor_Imposto;

    return 0;
}