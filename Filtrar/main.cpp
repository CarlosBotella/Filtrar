//
//  main.cpp
//  Filtrar
//
//  Created by Carlos Botella Navarro on 21/10/21.
//

//------------------------------------------------
// Lista <R> --> filtrar() --> Lista <R>
//------------------------------------------------
#include <iostream>
using namespace std;

int filtrar(int *p, int *m, int cuantos){
    int num = 0;
    for (int i = 0; i < cuantos; i++) {
        if (p[i] >= 0){
            m[num] = p[i];
            num  = num + 1;
        }
    }
    return num;
}

int main() {
    int lista[10] = {-10,4,7,-8,20,-35,6,3,-2,9};
    int listaPositivos[10];
    int numElementos = filtrar(&lista[0], &listaPositivos[0],10);
    for (int i = 0; i < numElementos; i++) {
        cout << listaPositivos[i] << endl;
    }
}
