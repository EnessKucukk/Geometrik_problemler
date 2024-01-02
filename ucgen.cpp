
#include "ucgen.h"
#include "dogruparcasi.h"
#include <cmath>
#include <iostream>


Ucgen::Ucgen(const Nokta& xy1, const Nokta& xy2, const Nokta& xy3)
    : xy1(xy1), xy2(xy2), xy3(xy3) {}

Nokta Ucgen::getXY1() const {
    return xy1;
}
void Ucgen::setXY1(const Nokta& xy) {
    xy1 = xy;
}

Nokta Ucgen::getXY2() const {
    return xy2;
}
void Ucgen::setXY2(const Nokta& xy) {
    xy2 = xy;
}
Nokta Ucgen::getXY3() const {
    return xy3;
}

void Ucgen::setXY3(const Nokta& xy) {
    xy3 = xy;
}
std::string Ucgen::toString() const {
    return "Ucgen; " + xy1.toString() + ", " + xy2.toString() + ", " + xy3.toString();
}

double Ucgen::alan() const {

    
    return 0.5 * DogruParcasi(xy1, xy2).uzunluk() * xy3.getY() - xy1.getY();
}

double Ucgen::cevre() const {
    
    double a = DogruParcasi(xy1, xy2).uzunluk();
    double b = DogruParcasi(xy2, xy3).uzunluk();
    double c = DogruParcasi(xy3, xy1).uzunluk();
    return a + b + c;
}
double* Ucgen::acilar() const {
    
    double* aciDizisi = new double[3];
    double a = DogruParcasi(xy1, xy2).uzunluk();
    double b = DogruParcasi(xy2, xy3).uzunluk();
    double c = DogruParcasi(xy3, xy1).uzunluk();

    aciDizisi[0] = acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / 3.14);
    aciDizisi[1] = acos((c * c + a * a - b * b) / (2 * c * a)) * (180.0 / 3.14);
    aciDizisi[2] = acos((a * a + b * b - c * c) / (2 * a * b)) * (180.0 / 3.14);

    return aciDizisi;
}
