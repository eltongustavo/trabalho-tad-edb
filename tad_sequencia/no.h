#pragma once

class No{

private:
    int valor;
    No* proximo;
public:
    No(int v, No* no);
    int getValor();
    No* getProximo();
    void setProximo(No* no);
};

