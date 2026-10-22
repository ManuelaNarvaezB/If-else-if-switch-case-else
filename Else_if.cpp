#include <iostream>
using namespace std;

int main() {
    float nota = 4.5;

    if (nota >= 4.5) {
        cout << "Excelente";
    } else if (nota >= 3.0) {
        cout << "Aprobado";
    } else {
        cout << "Reprobado";
    }

    return 0;
}
"========================================================================"
#include <iostream>
using namespace std;

int main() {
    int edad = 15;

    if (edad < 13) {
        cout << "Nino";
    } else if (edad < 18) {
        cout << "Adolescente";
    } else {
        cout << "Adulto";
    }

    return 0;
}
"============================================================================"
#include <iostream>
using namespace std;

int main() {
    int numero = 0;

    if (numero > 0) {
        cout << "Positivo";
    } else if (numero < 0) {
        cout << "Negativo";
    } else {
        cout << "Es cero";
    }

    return 0;
}