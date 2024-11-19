#include <iostream>

using namespace std;

// Clase base
class Vehiculo {
public:
    virtual void acelerar() = 0; // Función virtual pura
    virtual ~Vehiculo() {}
};

// Clase derivada Coche
class Coche : public Vehiculo {
public:
    void acelerar() override {
        cout << "El coche acelera a 100 km/h." << endl;
    }
};

// Clase derivada Moto
class Moto : public Vehiculo {
public:
    void acelerar() override {
        cout << "La moto acelera a 80 km/h." << endl;
    }
};

int main() {
    Vehiculo* coche = new Coche();
    Vehiculo* moto = new Moto();

    coche->acelerar();
    moto->acelerar();

    delete coche;
    delete moto;

    return 0;
}

