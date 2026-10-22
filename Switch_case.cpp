#include <iostream>
using namespace std;

int main() {
    int dia = 1;

    switch (dia) {
        case 1:
            cout << "Lunes";
            break;

        case 2:
            cout << "Martes";
            break;

        case 3:
            cout << "Miercoles";
            break;

        default:
            cout << "Dia no valido";
    }

    return 0;
}
"====================================================================================="
#include <iostream>
using namespace std;

int main() {
    int opcion = 2;

    switch (opcion) {
        case 1:
            cout << "Ver perfil";
            break;

        case 2:
            cout << "Ver mensajes";
            break;

        case 3:
            cout << "Salir";
            break;

        default:
            cout << "Opcion no valida";
    }

    return 0;
}
"======================================================================================"
#include <iostream>
using namespace std;

int main() {
    int opcion = 1;
    int a = 10;
    int b = 5;

    switch (opcion) {
        case 1:
            cout << a + b;
            break;

        case 2:
            cout << a - b;
            break;

        case 3:
            cout << a * b;
            break;

        default:
            cout << "Opcion no valida";
    }

    return 0;
}