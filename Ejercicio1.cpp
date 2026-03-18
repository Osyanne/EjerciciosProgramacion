#include <iostream>
#include <string>
using namespace std;
int main() {
    string nombre;
    char credencial, perteneceAlCurso;
    int minutosRetraso, faltas;
    cout << "=== CONTROL DE ACCESO AL LABORATORIO ===" << endl;
    cout << "Nombre del estudiante: ";
    getline(cin, nombre);
    cout << "Tiene credencial? (S/N): ";
    cin >> credencial;
    if (credencial != 'S' && credencial != 's') {
        cout << "Estado: NO INGRESA" << endl;
        cout << "Motivo: Sin credencial" << endl;
        cout << "Prioridad: ALTA" << endl;
        return 0;
    }
    cout << "Pertenece al curso actual? (S/N): ";
    cin >> perteneceAlCurso;
    if (perteneceAlCurso != 'S' && perteneceAlCurso != 's') {
        cout << "Estado: NO INGRESA" << endl;
        cout << "Motivo: No pertenece al curso" << endl;
        return 0;
    }
    cout << "Minutos de retraso: "; cin >> minutosRetraso;
    cout << "Faltas acumuladas: ";  cin >> faltas;
    if (faltas >= 5) {
        cout << "Estado: NO INGRESA" << endl;
        cout << "Motivo: 5 o mas faltas" << endl;
    } else if (minutosRetraso > 10) {
        cout << "Estado: NO INGRESA" << endl;
        cout << "Motivo: Mas de 10 minutos tarde" << endl;
    } else if (faltas >= 3 || minutosRetraso > 0) {
        cout << "Estado: INGRESA CON ADVERTENCIA" << endl;
    } else {
        cout << "Estado: INGRESA SIN PROBLEMA" << endl;
        cout << "Prioridad: NORMAL" << endl;
    }
    return 0;
}
