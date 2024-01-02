#include "daire.h"
#include <cmath>
#include <iostream>


Daire::Daire(const Nokta& orjin, double r) : orjin(orjin), r(r) {}
Daire::Daire(const Daire& nesne) : orjin(nesne.orjin), r(nesne.r) {}
Daire::Daire(const Daire& nesne, double x) : orjin(nesne.orjin), r(nesne.r * x) {}

double Daire::alan() const {
    return 3.14 * r * r;
}
double Daire::cevre() const {
    return 2 * 3.14 * r;
}

int Daire::kesisim(const Daire& dairee) const {
    double uzaklik = sqrt(pow(orjin.getX() - dairee.orjin.getX(), 2) + pow(orjin.getY() - dairee.orjin.getY(), 2));
    if (uzaklik + dairee.r < r) {
        return 0; 
    } else if (uzaklik <= r + dairee.r) {
        return 1; 
    } else {
        return 2; 
    }
}

std::string Daire::toString() const {
    return "Merkez: " + orjin.toString() + ", Yaricap: " + std::to_string(r);
}

void Daire::yazdir() const {
    std::cout << toString() << std::endl;
}
