#include <iostream>
using namespace std;

int main() {
	float suma = 0, calificacion, promedio;
	int contador = 1;

	cout << "Ingrese las calificaciones de las 10 pruebas (0-10):" << endl;

	while (contador <= 10) {
		cout << "Prueba " << contador << ": ";
		cin >> calificacion;

		// Validación opcional (si se requiere)
		if (calificacion < 0 || calificacion > 10) {
			cout << "Error: Ingrese un valor entre 0 y 10." << endl;
			continue;
		}

		suma += calificacion;
		contador++;
	}

	promedio = suma / 10;

	cout << "Promedio: " << promedio << endl;
	if (promedio >= 9) {
		cout << "Resultado: Aceptado" << endl;
	} else {
		cout << "Resultado: Rechazado" << endl;
	}

	return 0;
}