#pragma once

#include "nokta.h"

class DogruParcasi {
private:
    Nokta xy1;
    Nokta xy2;

public:
    DogruParcasi(const Nokta& xy1, const Nokta& xy2);
    DogruParcasi(const DogruParcasi& nesne);
    DogruParcasi(const Nokta& ortaNokta, double uzunluk, double egim);
    void setP1(const Nokta& point);
    Nokta getXY1() const;
    void setXY1(const Nokta& nokta);

    Nokta getXY2() const;
    void setXY2(const Nokta& nokta);

    double uzunluk() const;

    Nokta kesisimNoktasi(const Nokta& dikNokta) const;

    Nokta ortaNokta() const;

    std::string toString() const;
    void yazdir() const;
};


