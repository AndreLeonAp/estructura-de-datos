#include <iostream>
using namespace std;

int main() {
    struct Nodo {
    int dato;
    Nodo* siguiente;
};

void insertar(Nodo*& cabeza, int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
}

void mostrar(Nodo* cabeza) {
    while (cabeza != nullptr) {
        cout << cabeza->dato << " -> ";
        cabeza = cabeza->siguiente;
    }
    cout << "NULL" << endl;
}

int main() {
    Nodo* lista = nullptr;
    insertar(lista, 10);
    insertar(lista, 20);
    insertar(lista, 30);
    mostrar(lista);
    return 0;
}

    return 0;
}