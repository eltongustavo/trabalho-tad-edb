#include "sequencia.h"

Sequencia::Sequencia(){
    quantidade = 0;
    inicio = nullptr;
}

int Sequencia::getQuantidade(){
    return quantidade;
}

void Sequencia::get(int pos){
    if(pos <= 0 || pos > quantidade){
    std::cout << std::endl << "Posição Inválida!" << std::endl;
    } else {
        No* atual = inicio;
        int aux = 1;
        while(aux < pos) {
            atual = atual->getProximo();
            aux++;
        }
        std::cout << std::endl << "Elemento " << pos << ": " << atual->getValor() << std::endl;
    }
}

void Sequencia::print(){

    std::cout << std::endl << "(PRINT)" << std::endl;
    std::cout << "Sequência: ";

    if (inicio == nullptr || quantidade == 0) {
        std::cout << "Lista vazia!";
    }

    No* atual = inicio;

    while (atual != nullptr) {
        std::cout << atual->getValor() << " ";
        atual = atual->getProximo();
    }

    std::cout << std::endl;
    std::cout << "quantidade: " << quantidade << std::endl << std::endl;
}

bool Sequencia::insert(int pos, int elem){
    if(quantidade == 0){
        if(pos != 1){
            std::cout << std::endl << "A lista está vazia, adicione um elemento na posição 1" << std::endl;
            return false;
        }
        No* no = new No(elem, nullptr);
        inicio = no;
        std::cout << std::endl << no->getValor() << " adicionado com sucesso na posição " << 1 << std::endl;
        quantidade++;
        return true;
    } else{
        if(pos <= 0 || pos > quantidade+1){
            std::cout << std::endl << "Posição inválida!" << std::endl;
            return false;
        }else{
            if(pos == 1){
                No* no = new No(elem, inicio);
                inicio = no;
                std::cout << std::endl << no->getValor() << " adicionado com sucesso na posição " << 1 << std::endl;
                quantidade++;
            }else if(pos == quantidade + 1){
                No* no = new No(elem, nullptr);
                No* atual = inicio;
                
                while (atual->getProximo() != nullptr) {
                    atual = atual->getProximo();
                }

                atual->setProximo(no);
                quantidade++;
                std::cout << std::endl << no->getValor() << " adicionado com sucesso na posição " << quantidade << std::endl;

            } else {
                int aux = 1;
                No* no = new No(elem, nullptr);
                No* atual = inicio;
                while (aux < pos-1){
                    atual = atual->getProximo();
                    aux++;
                }
                
                no->setProximo(atual->getProximo());
                atual->setProximo(no);

                std::cout << std::endl << no->getValor() << " adicionado na posição " << aux+1 << std::endl;
            
                quantidade++;
            }
        }
        return true;
    }
}

bool Sequencia::remove(int pos){
    if(pos <= 0 || pos > quantidade){
        std::cout << std::endl << "Posição inválida!" << std::endl;
        return false;
    }else{
        No* atual = inicio;
        if(pos == 1){
            inicio = atual->getProximo();
            std::cout << std::endl << atual->getValor() << " removido com sucesso da posição " << pos << std::endl;
            delete[] atual;
            
        } else if(pos == quantidade){
            int aux = 1;
            while(aux < pos-1){
                atual = atual->getProximo();
                aux++;
            }
            std::cout << std::endl << atual->getProximo()->getValor() << " removido com sucesso da posição " << pos << std::endl;
            delete[] atual->getProximo();
            atual->setProximo(nullptr);
        } else{
            int aux = 1;
            while(aux < pos-1) {
                atual = atual->getProximo();
                aux++;
            }
            No* no_aux = atual->getProximo();
            atual->setProximo(no_aux->getProximo());
            std::cout << std::endl << no_aux->getValor() << " removido com sucesso da posição " << pos <<  std::endl;
            delete[] no_aux;
        }
        quantidade--;
        return true;
    }

}



