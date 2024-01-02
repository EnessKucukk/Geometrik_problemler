#pragma once
#include "nokta.h"

class Daire {
private:
    Nokta orjin;
    double r;

public:
 
    Daire(const Nokta& orjin, double r);
    Daire(const Daire& nesne);
    Daire(const Daire& nesne, double x);

    
    double alan() const;
    double cevre() const;
    int kesisim(const Daire& dairee) const;

    std::string toString() const;
    void yazdir() const;
};

