#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string clasifAngulo(double angulo) {
    if (angulo > 0 && angulo < 90) {
        return "agudo";
    } else if (angulo == 90) {
        return "recto";
    } else if (angulo > 90 && angulo < 180) {
        return "obtuso";
    } else if (angulo == 180) {
        return "extendido";
    } else {
        return "angulo invalido";
    }
}

string clasifTriangulo(double a, double b, double c) {
    if (a == b && b == c) {
        return "Equilatero";
    } else if (a == b || a == c || b == c) {
        return "isosceles";
    } else {
        return "escaleno";
    }
}

double calcAreaRectangulo(double largo, double ancho) {
    return largo * ancho;
}


