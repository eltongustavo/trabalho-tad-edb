#pragma once

class ArraySequence{

private:
    int capacidade;
    int* array;
    int tamanho;

public:
    ArraySequence();
    void pushBack(int value);
    void pushFront(int value);
    void insert(int pos, int value);
    void remove(int pos);
    bool find(int value);
    int size();
    void print();
    void redimensionar();
};

