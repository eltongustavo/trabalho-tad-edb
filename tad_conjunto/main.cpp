#include <iostream>
#include "conjunto.h"

int main(){
    Conjunto A;
    Conjunto B;
    A.add(1);
    A.add(2);
    A.add(3);
    A.add(5);
    B.add(3);
    B.add(4);
    B.add(5);
    B.add(6);
    std::cout << "A = ";
    A.print();
    std::cout << "B = ";
    B.print();
    Conjunto uni = uni.sets_union(A, B);
    std::cout << "A ∪ B = ";
    uni.print();
    Conjunto inter = uni.sets_intersection(A, B);
    std::cout << "A ∩ B = ";
    inter.print();

    return 0;
}

