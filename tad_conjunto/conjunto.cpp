#include <iostream>
#include "conjunto.h"

Conjunto::Conjunto(){
    capacidade = 3;
    elementos = new int[capacidade];
    quant_elementos = 0;
}

bool Conjunto::contains(int elem){
    for (int i = 0; i < quant_elementos; i++){
        if(elem == elementos[i]){
            return true;
        }
    }
    return false;
}

void Conjunto::redimensionar(){
    capacidade*=2;
    int* novos_elementos = new int[capacidade];

    for (int i = 0; i < quant_elementos; i++){
        novos_elementos[i] = elementos[i];
    }

    delete[] elementos;
    elementos = novos_elementos;
}

void Conjunto::print(){
    std::cout << "{";
    for (int i = 0; i < quant_elementos; i++){
        if(i < quant_elementos - 1){
            std::cout << elementos[i] << ", ";
        }else{
            std::cout << elementos[i];
        }
    }
    std::cout << "}" << std::endl;
}

void Conjunto::add(int elem){
    if(quant_elementos == capacidade){
        redimensionar();
    }

    if(contains(elem) == false){
        elementos[quant_elementos] = elem;
        quant_elementos++;
    }

}

void Conjunto::remove(int elem){
    if(contains(elem) == true){
        for (int i = 0; i < quant_elementos; i++){
            if(elem == elementos[i]){
                int aux = elementos[quant_elementos-1];
                elementos[quant_elementos-1] = elem;
                elementos[i] = aux;
            }
        }
    quant_elementos--;
    }
}

Conjunto Conjunto::sets_union(Conjunto a, Conjunto b){
    Conjunto uni;
    for (int i = 0; i < a.quant_elementos; i++){
        uni.add(a.elementos[i]);
    }

    for (int i = 0; i < b.quant_elementos; i++){
        uni.add(b.elementos[i]);
    }

    return uni;
}

Conjunto Conjunto::sets_intersection(Conjunto a, Conjunto b){
    Conjunto inter;

    for (int i = 0; i < a.quant_elementos; i++){
        for (int j = 0; j < b.quant_elementos; j++){
            if(a.contains(b.elementos[j])){
                inter.add(b.elementos[j]);
            }
        }   
    }
  
    return inter;
}



