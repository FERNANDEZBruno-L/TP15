#include <iostream>

using namespace std;

// Clase base
class Empleado {
public:
    virtual double calcularSalario() = 0; // Funci�n virtual pura
    virtual ~Empleado() {}
};

// Clase derivada Gerente
class Gerente : public Empleado {
private:
    double salarioBase;
    double bonificacion;
public:
    Gerente(double sb, double b) : salarioBase(sb), bonificacion(b) {}
    double calcularSalario() override {
        return salarioBase + bonificacion; // Salario del gerente con bonificaci�n
    }
};

// Clase derivada Vendedor
class Vendedor : public Empleado {
private:
    double salarioBase;
    double comision;
public:
    Vendedor(double sb, double c) : salarioBase(sb), comision(c) {}
    double calcularSalario() override {
        return salarioBase + comision; // Salario del vendedor con comisi�n
    }
};

int main() {
    Empleado* gerente = new Gerente(3000, 500);  // Salario base y bonificaci�n
    Empleado* vendedor = new Vendedor(1500, 300);  // Salario base y comisi�n

    cout << "Salario del gerente: " << gerente->calcularSalario() << endl;
    cout << "Salario del vendedor: " << vendedor->calcularSalario() << endl;

    delete gerente;
    delete vendedor;

    return 0;
}

