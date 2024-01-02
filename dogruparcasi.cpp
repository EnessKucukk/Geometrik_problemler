#include "dogruparcasi.h"
#include <cmath>

DogruParcasi::DogruParcasi(const Nokta& xy1, const Nokta& xy2) : xy1(xy1), xy2(xy2) {}

DogruParcasi::DogruParcasi(const DogruParcasi& nesne) : xy1(nesne.xy1), xy2(nesne.xy2) {}

DogruParcasi::DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim) {
    
    double aci = atan(egim); 
    double gX = uzunluk / 2 * cos(aci);
    double gY = uzunluk / 2 * sin(aci);
    
    xy1 = Nokta(ortaNokta.getX() - gX, ortaNokta.getY() - gY);
    xy2 = Nokta(ortaNokta.getX() + gX, ortaNokta.getY() + gY);
}

void DogruParcasi::setP1(const Nokta& point) {
    xy1 = point;
}
Nokta DogruParcasi::getXY1() const {
    return xy1;
}

void DogruParcasi::setXY1(const Nokta& nokta) {
    xy1 = nokta;
}
Nokta DogruParcasi::getXY2() const {
    return xy2;
}
void DogruParcasi::setXY2(const Nokta& nokta) {
    xy2 = nokta;
}

double DogruParcasi::uzunluk() const {
    return sqrt(pow(xy2.getX() - xy1.getX(), 2) + pow(xy2.getY() - xy1.getY(), 2));
}

Nokta DogruParcasi::kesisimNoktasi(const Nokta& dikNokta) const {
    Nokta kesisim;

    
    double m1 = (xy2.getY() - xy1.getY()) / (xy2.getX() - xy1.getX());
    double m2 = (dikNokta.getY() - xy1.getY()) / (dikNokta.getX() - xy1.getX());

    
    kesisim.setX((m1 * xy1.getX() - m2 * dikNokta.getX() + dikNokta.getY() - xy1.getY()) / (m1 - m2));
    kesisim.setY(m1 * (kesisim.getX() - xy1.getX()) + xy1.getY());

    return kesisim;
}

Nokta DogruParcasi::ortaNokta() const {
   
    return Nokta((xy1.getX() + xy2.getX()) / 2, (xy1.getY() + xy2.getY()) / 2);
}

std::string DogruParcasi::toString() const {
    return xy1.toString() + " ve " + xy2.toString();
}

void DogruParcasi::yazdir() const {
    std::cout << toString() << std::endl;
}
