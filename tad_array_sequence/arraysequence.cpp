#include <iostream>
#include "arraysequence.h"

ArraySequence::ArraySequence(){
    capacidade = 3;
    array = new int[capacidade];
    tamanho = 0;
}

void ArraySequence::redimensionar(){
    capacidade *= 2;
    int* novo_array = new int[capacidade];

    for (int i = 0; i < tamanho; i++){
        novo_array[i] = array[i];
    }

    delete[] array;
    array = novo_array;
}

int ArraySequence::size(){
    return tamanho;
}

void ArraySequence::print(){
    std::cout << std::endl << "ArraySequence = [";
    for(int i = 0; i < tamanho; i++){
        if(i < tamanho - 1){
            std::cout << array[i] << ", ";
        } else{
            std::cout << array[i];
        }
    }
    std::cout << "]" << std::endl;
}

bool ArraySequence::find(int value){
    for (int i = 0; i < tamanho; i++){
        if(array[i] == value){
            std::cout << "Elemento [" << value << "] encontrado na posição " << i+1 << std::endl;
            return true;
        }
    }
    std::cout << "Elemento [" << value << "] não encontrado na sequência" << std::endl;
    return false;
}

void ArraySequence::pushBack(int value){
    if(tamanho == capacidade){
        redimensionar();
    }

    array[tamanho] = value;
    tamanho++;
}

void ArraySequence::pushFront(int value){
    if(tamanho == capacidade){
        redimensionar();
    }

    for (int i = tamanho - 1; i >= 0; i--){
        array[i+1] = array[i];
    }

    array[0] = value;
    tamanho++;
}

void ArraySequence::remove(int pos){

    if(pos <= 0 || pos > tamanho){
        std::cout << "Posição Inválida!" << std::endl;
        return;
    }

    if(pos == tamanho){
        tamanho--;
    } else {
        for (; pos < tamanho; pos++){
            array[pos - 1] = array[pos];
        }
        tamanho--;
    }
}

void ArraySequence::insert(int pos, int value){
    if(pos <= 0 || pos > tamanho + 1){
        std::cout << std::endl << pos << " é uma posição inválida!" << std::endl;
        return;
    }
    
    if(tamanho == capacidade){
        redimensionar();
    }

    if(pos == 1){
        pushFront(value);
    } else if (pos == tamanho + 1) {
        pushBack(value);
    } else {
        for (int i = tamanho; i > pos-1; i--){
            array[i] = array[i - 1];
        }
        array[pos - 1] = value;
        tamanho++;
    }
}

