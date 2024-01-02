#pragma once
#include <iostream>
#include <string>

class Nokta {
private:
    double x;
    double y;

public:
    Nokta();
    Nokta(double xy);
    Nokta(double x, double y);
    Nokta(const Nokta& nesne);
    Nokta(const Nokta& nesne, double ofset_x, double ofset_y);

    double getX() const;
    void setX(double x);

    double getY() const;
    void setY(double y);

    void set(double x, double y);

    std::string toString() const;
    void yazdir() const;
};


