#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 float distancia, consumo_carro, preço_gasolina, gasto_viagem;

 cout<< "Digite a distância percorrida da viagem, o consumo do carro em Km/litro e o perço da gasolina: ";
 cin>> distancia >> consumo_carro >> preço_gasolina;

 gasto_viagem = (consumo_carro * preço_gasolina) * distancia;

 cout<< "O gasto da viagem em R$ é de " << gasto_viagem;
 
    return 0;
}