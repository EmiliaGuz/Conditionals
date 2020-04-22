// PracticaCondicional2.19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int x, y, z;

    cout << "Ingrese tres numeros enteros diferentes: ";
    cin >> x;
    cin >> y;
    cin >> z;

    int suma = x + y + z;
    int promedio = suma / 3;
    int producto = x * y * z;

    if (x < y && x < z) {
        cout << "El menor es " << x;
    }
    if (y < x && y < z) {
        cout << "El menor es " << y;
    }
    if (z < x && z < y) {
        cout << "El menor es " << z;
    }


    if (x > y && x > z) {
        cout << "El mayor es " << x;
    }
    if (y > x && y > z) {
        cout << "El mayor es " << y;
    }
    if (z > x && z > y) {
        cout << "El mayor es " << z;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
