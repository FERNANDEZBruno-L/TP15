#include <iostream>

using namespace std;

// Clase base
class Animal {
public:
    virtual void hacerSonido() = 0; // Función virtual pura
    virtual ~Animal() {}
};

// Clase derivada Perro
class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "Guau guau!" << endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "Miau miau!" << endl;
    }
};

// Clase derivada Pato
class Pato : public Animal {
public:
    void hacerSonido() override {
        cout << "Cuac cuac!" << endl;
    }
};

int main() {
    Animal* perro = new Perro();
    Animal* gato = new Gato();
    Animal* pato = new Pato();

    perro->hacerSonido();
    gato->hacerSonido();
    pato->hacerSonido();

    delete perro;
    delete gato;
    delete pato;

    return 0;
}

