#include<iostream>
#include"funciones.cpp"
using namespace std;
int main() {
    double angulo, lado1, lado2, lado3, largo, ancho;
    int opc;
    cout<<"MENU DE OPCIONES"<<endl;
    cout<<"Ingrese la opcion que desee: ";
    cin>>opc;
    switch (opc)
    {
    case 1:
        cout << "Ingrese la medida del angulo: ";
        cin >> angulo;
        cout << "El angulo es " << clasifAngulo(angulo) << endl;
        break;
    case 2:
        cout << "Ingrese las medidas de los lados del triangulo (Separe cada una con espacio): ";
        cin >> lado1 >> lado2 >> lado3;
        cout << "El triangulo es " << clasifTriangulo(lado1, lado2, lado3) << endl;
        break;
    case 3:
        cout << "Ingrese la medida del largo del rectangulo: ";
        cin >> largo;
        cout << "Ingrese la medida del ancho del rectangulo: ";
        cin >> ancho;
        cout << "El area del rectangulo es " << calcAreaRectangulo(largo, ancho) << endl;
    default:
        break;
    }
    return 0;
}