#include <iostream>

template<typename T>
struct TElementoPilha {
    T dado;
    TElementoPilha<T>* proximo;
};

template<typename T>
struct TPilha {
    TElementoPilha<T> *topo;
};

template<typename T>
void inicializaPilha (TPilha<T> &pilha){
    pilha.topo = nullptr;
};

template<typename T>
void push(TPilha<T> &pilha, T dado){
    TElementoPilha<T> *novo = new TElementoPilha<T>;
    novo->dado = dado;
    novo->proximo = pilha.topo;
    pilha.topo = novo;
}

template<typename T>
T pop(TPilha<T> &pilha){
    TElementoPilha<T> *apagar;
    apagar = pilha.topo;
    T dado = apagar->dado;
    pilha.topo = pilha.topo->proximo;
    delete apagar;
    return dado;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
