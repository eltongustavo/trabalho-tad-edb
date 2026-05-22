#pragma once

class Conjunto{

private:
    int tamanho;
    int* elementos;
    int quant_elementos;

public:
    Conjunto();
    void add(int elem);
    void remove(int elem);
    bool contains(int elem);
    Conjunto sets_union(Conjunto a, Conjunto b);
    Conjunto sets_intersection(Conjunto a, Conjunto b);
    void print();
    void redimensionar();
};