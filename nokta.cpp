
#include "nokta.h"
#include <iostream>
#include <iomanip>

Nokta::Nokta() : x(0), y(0) {}

Nokta::Nokta(double xy) : x(xy), y(xy) {}

Nokta::Nokta(double x, double y) : x(x), y(y) {}

Nokta::Nokta(const Nokta& nesne) : x(nesne.x), y(nesne.y) {}

Nokta::Nokta(const Nokta& nesne, double ofset_x, double ofset_y) : x(nesne.x + ofset_x), y(nesne.y + ofset_y) {}

double Nokta::getX() const {
    return x;
}

void Nokta::setX(double x) {
    this->x = x;
}

double Nokta::getY() const {
    return y;
}

void Nokta::setY(double y) {
    this->y = y;
}

void Nokta::set(double x, double y) {
    this->x = x;
    this->y = y;
}

std::string Nokta::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

void Nokta::yazdir() const {
    std::cout << std::fixed << std::setprecision(2) << "(" << x << ", " << y << ")" << std::endl;
}
