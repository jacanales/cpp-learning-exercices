#include <iostream>

using namespace std;

class CCuenta {
private:
    string nombre, cuenta;
    double saldo, tipoDeInteres;

public:

    CCuenta() {
        this->saldo = 0.0;
        this->tipoDeInteres = 0.0;
    }

    CCuenta(string nombre, string cuenta, double saldo, double tipo) {
        this->asignarNombre(nombre);
        this->asignarCuenta(cuenta);
        this->saldo = saldo;
        this->asignarTipoDeInteres(tipo);
    }

    void asignarNombre(string nombre) {
        if (nombre.length() == 0) {
            cout << "Error: Cadena vacía\n" << endl;

            return;
        }

        this->nombre = nombre;
    }

    string obtenerNombre() {
        return this->nombre;
    }

    void asignarCuenta(string cuenta) {
        if (cuenta.length() == 0) {
            cout << "Error: Cuenta no válida\n" << endl;
        }

        this->cuenta = cuenta;
    }

    string obtenerCuenta() {
        return this->cuenta;
    }

    double estado() {
        return this->saldo;
    }

    void ingreso(double cantidad) {
        if (cantidad < 0) {
            cout << "Error: cantidad negativa\n" << endl;

            return;
        }

        this->saldo += cantidad;
    }

    void reintegro(double cantidad) {
        if (this->saldo - cantidad < 0) {
            cout << "Error: saldo no disponible\n" << endl;

            return;
        }

        this->saldo -= cantidad;
    }

    void asignarTipoDeInteres(double tipo) {
        if (tipo < 0) {
            cout << "Error: tipo no válido\n" << endl;

            return;
        }

        this->tipoDeInteres = tipo;
    }

    double obtenerTipoDeInteres() {
        return this->tipoDeInteres;
    }
};

class CCuentaAhorro : public CCuenta {
private:
    double cuotaMantenimiento;
public:
    CCuentaAhorro() {}

    CCuentaAhorro(string nombre, string cuenta, double saldo, double tipo, double mantenimiento) : CCuenta(nombre,
                                                                                                           cuenta,
                                                                                                           saldo,
                                                                                                           tipo) {
        asignarCuotaMantenimiento(mantenimiento);
    }

    void asignarCuotaMantenimiento(double mantenimiento) {
        if (mantenimiento < 0) {
            cout << "Error: cantidad negativa\n" << endl;

            return;
        }

        this->cuotaMantenimiento = mantenimiento;
    }

    double obtenerCuotaMantenimiento() {
        return this->cuotaMantenimiento;
    }

    void reintegro(double cantidad) {
        double saldo = estado();
        double tipoDeInteres = obtenerTipoDeInteres();

        if (tipoDeInteres >= 3.5) {
            if (saldo - cantidad < 1500) {
                cout << "Error: no dispone de esa cantidad\n";

                return;
            }
        }

        CCuenta::reintegro(cantidad);
    }
};

class COrdenador {
private:
    string marca, procesador;
    float peso;
    bool encendido = false, pantalla = true;
public:
    void setPeso(float peso) {
        this->peso = peso;
    }

    bool isEncendido() const {
        return encendido;
    }

    void encender() {
        if (this->encendido) {
            cout << "El ordenador ya está encendido" << endl;

            return;
        }

        this->encendido = true;
    }

    void apagar() {
        if (!this->encendido) {
            cout << "El ordenador ya está apagado" << endl;

            return;
        }

        this->encendido = false;
    }

    bool isPantalla() const {
        return pantalla;
    }

    void setPantalla(bool pantalla) {
        COrdenador::pantalla = pantalla;
    }

    void estado() {
        cout << "\nEl estado del ordenador es el siguiente:" << endl;
        cout << "Marca: " << this->marca << endl;
        cout << "Procesador: " << this->procesador << endl;
        cout << "Peso: " << this->peso << endl;

        if (this->isEncendido()) {
            cout << "El ordenador está encendido" << endl;
        } else {
            cout << "El ordenador está apagado" << endl;
        }

        if (this->isPantalla()) {
            cout << "La pantalla está activada" << endl;
        } else {
            cout << "La pantalla está desactivadaº" << endl;
        }
    }

    void asignarMarca(string marca) {
        if (marca.length() == 0) {
            marca = "Marca desconocida";
        } else {
            this->marca = marca;
        }
    }
};

void ccuenta() {
    CCuenta cuenta01;
    CCuentaAhorro cuenta02("Jesús Antonio Canales Diez", "BBVA", 6000, 1.5, 2);

    cuenta01.asignarNombre("Jesús Antonio Canales Diez");
    cuenta01.asignarCuenta("C/C");
    cuenta01.asignarTipoDeInteres(2.5);
    cuenta01.reintegro(3000);

    cuenta02.reintegro(cuenta02.obtenerCuotaMantenimiento());
    cuenta02.ingreso(6000);
    cuenta02.reintegro(10000);

    cout << cuenta01.obtenerNombre() << endl;
    cout << cuenta01.obtenerCuenta() << endl;
    cout << cuenta01.estado() << endl;
    cout << cuenta01.obtenerTipoDeInteres() << endl;

    cout << cuenta02.obtenerNombre() << endl;
    cout << cuenta02.obtenerCuenta() << endl;
    cout << cuenta02.estado() << endl;
    cout << cuenta02.obtenerTipoDeInteres() << endl;
}

void ordenador() {
    COrdenador miOrdenador;

    miOrdenador.asignarMarca("Macbook Pro");
    miOrdenador.setPantalla("LG");
    miOrdenador.setPeso(15.0);
    miOrdenador.encender();
    miOrdenador.estado();
    miOrdenador.apagar();

    cout << "\n";
}