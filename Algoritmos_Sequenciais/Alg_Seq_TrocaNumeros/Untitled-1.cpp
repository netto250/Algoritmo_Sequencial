#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 
 int a, b, c;

 cout<< "Digite dois numeros inteiros: ";
 cin>> a >> b;

 c = b;
 b = a;
 a = c;

 cout<< "O valores invertidos são " << a << b;

    return 0;
}