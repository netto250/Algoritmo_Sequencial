#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 float m1, m2, m3, media_Final;

 cout<< "Digite as três médias do aluno: ";
 cin>> m1 >> m2 >> m3;

 media_Final = (m1 * 2 + m2 * 4 + m3 * 6) / 12;

 cout<< "A média final do aluno é de " << media_Final;

    return 0;
}