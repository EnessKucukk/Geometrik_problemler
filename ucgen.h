#pragma once
#include "nokta.h"
#include "dogruparcasi.h"

class Ucgen {
private:
    Nokta xy1;
    Nokta xy2;
    Nokta xy3;

public:
    
    Ucgen(const Nokta& xy1, const Nokta& xy2, const Nokta& xy3);

    
    Nokta getXY1() const;
    void setXY1(const Nokta& xy);

    Nokta getXY2() const;
    void setXY2(const Nokta& xy);

    Nokta getXY3() const;
    void setXY3(const Nokta& xy);

    
    std::string toString() const;
    double alan() const;
    double cevre() const;
    double* acilar() const;
};

