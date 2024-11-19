#include <iostream>
#include <cmath>

using namespace std;

// Clase base
class Figura {
public:
    virtual double calcularArea() = 0; // Función virtual pura
    virtual ~Figura() {} // Destructor virtual
};

// Clase derivada Rectángulo
class Rectangulo : public Figura {
private:
    double ancho, alto;
public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}
    double calcularArea() override {
        return ancho * alto; // Fórmula área del rectángulo
    }
};

// Clase derivada Círculo
class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() override {
        return M_PI * radio * radio; // Fórmula área del círculo
    }
};

int main() {
    Figura* figura1 = new Rectangulo(4, 5);
    Figura* figura2 = new Circulo(3);

    cout << "Área del rectángulo: " << figura1->calcularArea() << endl;
    cout << "Área del círculo: " << figura2->calcularArea() << endl;

    delete figura1;
    delete figura2;

    return 0;
}

