#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 float metade, numero_Real;

 cout<< "Digite um numero real: ";
 cin>> numero_Real;

 metade = numero_Real / 2;

 cout<< "A metade do número " <<numero_Real << "é " <<metade;


    return 0;
}