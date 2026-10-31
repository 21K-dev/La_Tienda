/*
La_Tienda.cpp: 

Una tienda registra la cantidad y el precio de un producto. Debe
calcular el total de la venta y aplicar 10 % de descuento si el
total supera 5,000.
*/

#include <iostream>
using namespace std;

int calcularTotalDePago(int cantidad, int precio) {
    int total = cantidad * precio;

    if (total >= 5000) {
        total = total - (total * 0.10);
    }

    return total;
}

int main() {
    int cantidad, precio;

    cout << "Saludos usuario, bienvenido a nuestra tienda: Por favor, digite los datos solicitados para autocompletar el servicio." << endl;
    cout << "\n| DATOS DE COMPRA |" << endl;

    cout << "\nIngrese la cantidad de producto: "; cin >> cantidad;
    cout << "Ingrese el precio del mismo: "; cin >> precio;

    int totalPagar = calcularTotalDePago(cantidad, precio);


    if ((cantidad * precio) >= 5000) {
        cout << "\n!Aplicas para un descuento!";
    }

    cout << "\n El monto total de su compra es: " << totalPagar << endl;

    return 0;
}