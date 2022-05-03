#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 
 float salario, conta1, conta2, resto;

 cout<< "Digite o salario de João, a valor da primeira conta e o valor da segunda conta: ";
 cin>> salario >> conta1 >> conta2;

 conta1 = conta1 * 1.15;
 conta2 = conta2 * 1.15;

 resto = salario - (conta1 + conta2);

cout<< "O que sobrará do salário do João é R$" <<resto; 
    return 0;
}