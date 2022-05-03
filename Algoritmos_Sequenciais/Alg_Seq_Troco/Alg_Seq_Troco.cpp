#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 
 float valor_Pago, valor_Produto, troco;

 cout<< "Digite o valor que foi pago e em seguida digite o valor do produto: ";
 cin>> valor_Pago >> valor_Produto;

 troco = valor_Pago - valor_Produto;

 cout<< "O valor do troco é de " <<troco;

    return 0;
}