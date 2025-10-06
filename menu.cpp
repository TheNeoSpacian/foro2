#include <iostream>
using namespace std;

int main () {
    int opcion;
    do {
    cout << "===Menu===\n 1)Tortas\n 2)Palomitas\n 3)Agua\n 4)Salir\n";
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        cout << "Tortas: $45.00" << endl;
    } else if (opcion == 2) {
        cout << "Palomitas: $10.00" << endl;
    } else if (opcion == 3) {
        cout << "Agua 600 ml: $15.00" << endl;
    } else if (opcion == 4) {
        cout << "Adios..." << endl;
    }
} while (opcion != 4);
    
    return 0;
}