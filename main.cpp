#include "dogruparcasi.h"
#include "daire.h"
#include "ucgen.h"
#include <iostream>
using namespace std;


int main() {
    
    cout << endl << "NOKTA SINIFI ICIN TEST CIKTILARI:" << endl;
    Nokta n1;
    Nokta n2(5);
    Nokta n3(3, 4);
    Nokta n4(n3);
    Nokta n5(n3, 1, -1);

    cout << "Olusturulan 5 noktanin x ve y degerleri:" << endl;
    n1.yazdir();
    n2.yazdir();
    n3.yazdir();
    n4.yazdir();
    n5.yazdir();

    cout << "1. ve 2. noktalarin yeni x ve y degerleri:" << endl;
    n1.setX(10);
    n1.yazdir();
    n2.set(25, 30);
    n2.yazdir();

    cout << endl << "DOGRUPARCASI SINIFI ICIN TEST SONUCLARI:" << endl;
    Nokta n11;
    Nokta n21(3, 4);
    DogruParcasi dp(n11, n21);
    DogruParcasi dp2(dp);
    DogruParcasi dp3(n21, 10, 45);

    cout << "Olusturulan 3 dogru parcasinin baslangic ve bitis noktalari:" << endl;
    dp.yazdir();
    dp2.yazdir();
    dp3.yazdir();

    cout <<endl<< "2. dogru parcasinin baslangic ve bitis noktalari:" << endl;
    dp2.setP1(Nokta());
    dp2.yazdir();

    cout << "1. dogru parcasi icin uzunluk degeri: " << dp.uzunluk() << endl;
    cout << "1. dogru parcasi icin orta nokta: " << dp.ortaNokta().toString() << endl;

    
    cout << endl << "DAIRE SINIFI ICIN TEST SONUCLARI:" << endl;
    Nokta merkez1(0, 0);
    Daire d1(merkez1, 5);
    Daire d2(d1);
    Daire d3(d2, 3);

    cout << "Daire 1: ";
    d1.yazdir();
    cout << "Alan: " << d1.alan() << ", Cevre: " << d1.cevre() << endl;

    cout << endl << "Daire 2: ";
    d2.yazdir();
    cout << "Alan: " << d2.alan() << ", Cevre: " << d2.cevre() << endl;

    cout << endl << "Daire 3: ";
    d3.yazdir();
    cout << "Alan: " << d3.alan() << ", Cevre: " << d3.cevre() << endl;

    cout << "Daire 1 ve Daire 2 Kesisim Durumu: " << d1.kesisim(d2) << endl;
    cout << "Daire 1 ve Daire 3 Kesisim Durumu: " << d1.kesisim(d3) << endl;

    
    cout << endl << "UCGEN SINIFI ICIN TEST SONUCLARI:" << endl;
    Ucgen ucgen(Nokta(0, 0), Nokta(4, 0), Nokta(0, 3));

    cout << ucgen.toString() << endl;
    cout << "Alan: " << ucgen.alan() << endl;
    cout << "Cevre: " << ucgen.cevre() << endl;

    double *acilar = ucgen.acilar();
    cout << "Acilar: " << acilar[0] << ", " << acilar[1] << ", " << acilar[2] << endl;


    return 0;
}