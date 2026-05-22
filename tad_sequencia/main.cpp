#include <iostream>
#include "no.h"
#include "sequencia.h"

int main() {
    Sequencia s;

    int pos;
    int elem;
    int opcao = 0;
    int loop = true;

    while (loop) {
        std::cout << std::endl <<"Digite o que fazer na sequencia: " << std::endl;
        std::cout << "1. insert(pos, elem) | ";
        std::cout << "2. remover(pos) | ";
        std::cout << "3. get(pos) | ";
        std::cout << "4. teste mínimo sugerido | ";
        std::cout << "5. encerrar sistema" << std::endl;

        s.print();

        std::cout << "Digite a opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:

                std::cout << "Digite a posição: ";
                std::cin >> pos;

                std::cout << "Digite o elemento: ";
                std::cin >> elem;

                s.insert(pos, elem);
                break;
            
            case 2:

                if(s.getQuantidade() < 1){
                    std::cout << std::endl << "A lista está vazia, não há como remover nada dela!" << std::endl;
                    break;
                }

                std::cout << "Digite a posição: ";
                std::cin >> pos;

                s.remove(pos);
                break;

            case 3:
                if(s.getQuantidade() < 1){
                    std::cout << std::endl << "A lista está vazia, não há como selecionar nenhum elemento!" << std::endl;
                    break;
                }   
                std::cout << "Digite a posição: ";
                std::cin >> pos;

                s.get(pos);
                break;

            case 4:
                for (int i = 0; i <= 10; i++){
                    s.insert(i, i*2);
                }

                s.print();
                
                s.remove(5);
                s.remove(6);

                s.print();
                break;

            case 5:
                loop = false;
                break;

            default:
                std::cout << std::endl << "Opção Inválida!" << std::endl;
                break;
            }
    }
    return 0;
}
