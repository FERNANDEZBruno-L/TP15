#include <iostream>

using namespace std;

// Clase base
class InstrumentoMusical {
public:
    virtual void tocar() = 0; // Función virtual pura
    virtual ~InstrumentoMusical() {}
};

// Clase derivada Piano
class Piano : public InstrumentoMusical {
public:
    void tocar() override {
        cout << "Tocando el piano: Do, Re, Mi, Fa..." << endl;
    }
};

// Clase derivada Guitarra
class Guitarra : public InstrumentoMusical {
public:
    void tocar() override {
        cout << "Tocando la guitarra: Cuerda, rasgueo..." << endl;
    }
};

// Clase derivada Flauta
class Flauta : public InstrumentoMusical {
public:
    void tocar() override {
        cout << "Tocando la flauta: Do, Re, Mi..." << endl;
    }
};

int main() {
    InstrumentoMusical* piano = new Piano();
    InstrumentoMusical* guitarra = new Guitarra();
    InstrumentoMusical* flauta = new Flauta();

    piano->tocar();
    guitarra->tocar();
    flauta->tocar();

    delete piano;
    delete guitarra;
    delete flauta;

    return 0;
}

