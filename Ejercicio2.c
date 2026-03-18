
#include <iostream>
#include <string>
using namespace std;
int main() {
    double promedio, asistencia;
    int materias;
    char ingresos, proyectos;
    string beca;
    cout << "=== SISTEMA DE BECAS ===" << endl;
    cout << "Promedio: ";            cin >> promedio;
    cout << "Materias perdidas: ";   cin >> materias;
    cout << "% Asistencia: ";        cin >> asistencia;
    cout << "Ingresos (A/B): ";      cin >> ingresos;
    cout << "Proyectos (S/N): ";     cin >> proyectos;
    if (asistencia < 80) {
        cout << "SIN BENEFICIO - Asistencia insuficiente" << endl; return 0;
    }
    if (promedio < 7) {
        cout << "SIN BENEFICIO - Promedio menor a 7" << endl; return 0;
    }
    if (promedio >= 9 && asistencia >= 90 && materias == 0)
        beca = "BECA COMPLETA";
    else if (promedio >= 8 && asistencia >= 85)
        beca = "BECA PARCIAL";
    else
        beca = "AYUDA DE MATERIALES";
    if ((proyectos=='S'||proyectos=='s') && (ingresos=='B'||ingresos=='b')) {
        if (beca == "AYUDA DE MATERIALES") beca = "BECA PARCIAL";
        else if (beca == "BECA PARCIAL" && materias == 0) beca = "BECA COMPLETA";
    }
    cout << "Tipo de ayuda: " << beca << endl;
    return 0;
}
