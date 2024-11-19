#include <iostream>
#include <cmath>

using namespace std;

// Clase base
class Figura {
public:
    virtual double calcularArea() = 0; // Funci�n virtual pura
    virtual ~Figura() {} // Destructor virtual
};

// Clase derivada Rect�ngulo
class Rectangulo : public Figura {
private:
    double ancho, alto;
public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}
    double calcularArea() override {
        return ancho * alto; // F�rmula �rea del rect�ngulo
    }
};

// Clase derivada C�rculo
class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() override {
        return M_PI * radio * radio; // F�rmula �rea del c�rculo
    }
};

int main() {
    Figura* figura1 = new Rectangulo(4, 5);
    Figura* figura2 = new Circulo(3);

    cout << "�rea del rect�ngulo: " << figura1->calcularArea() << endl;
    cout << "�rea del c�rculo: " << figura2->calcularArea() << endl;

    delete figura1;
    delete figura2;

    return 0;
}

