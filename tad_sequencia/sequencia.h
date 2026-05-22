#pragma once

#include <iostream>
#include "no.h"

class Sequencia{
private:
    int quantidade = 0;
    No* inicio;

public:
    Sequencia();
    bool insert(int pos, int elem);
    bool remove(int pos);
    void get(int pos);
    void print();
    int getQuantidade();
};