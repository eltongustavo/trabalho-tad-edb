#include "no.h"

No::No(int v, No* no){
    valor = v;
    proximo = no;
}

int No::getValor(){
    return valor;
}

No* No::getProximo(){
    return proximo;
}

void No::setProximo(No* no){
    proximo = no;
}

