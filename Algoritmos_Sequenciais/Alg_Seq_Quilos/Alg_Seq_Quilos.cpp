#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 float valor_quilo, qtd_quilo, valor_pago;

 cout<< "Digite o valor do quilo de um produto e em seguida a quantidade de quilos do produto que foi comprada: ";
 cin>> valor_quilo >> qtd_quilo;

 valor_pago = valor_quilo * qtd_quilo;

 cout<< "O valor pago pelo produto foi " <<valor_pago;

    return 0;
}