#include <iostream>
#include "arraysequence.h"

int main(){

    ArraySequence array;

    std::cout << "Inserir os valores: [10, 20, 30, 40]";
    array.pushBack(10);
    array.pushBack(20);
    array.pushBack(30);
    array.pushBack(40);

    array.print();
    
    std::cout << std::endl << "Inserir um elemento no início";
    array.pushFront(0);

    array.print();

    std::cout << std::endl << "Inserir um elemento no meio";
    array.insert(4, 25);

    array.print();

    std::cout << std::endl << "Remover um elemento";
    array.remove(6);

    array.print();

    std::cout << std::endl << "Exibir a estrutura final";
    array.print();

    return 0;
}